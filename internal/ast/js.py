# Copyright (c) 2015, Facebook, Inc.
# All rights reserved.
#
# This source code is licensed under the BSD-style license found in the
# LICENSE file in the root directory of this source tree. An additional grant
# of patent rights can be found in the PATENTS file in the same directory.


class Printer(object):
  def __init__(self):
    pass

  def start_file(self):
    print '''/* @flow */
/* @generated */
/* jshint ignore:start */

/**
 *  Copyright (c) 2015, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 */

type Node = {
  kind: string;
  start?: ?number;
  end?: ?number;
};

type OperationKind = 'query' | 'mutation' | 'subscription';'''

  def end_file(self):
    pass

  def start_type(self, name):
    print
    print 'type %s = Node & {' % name
    kind = name
    if kind == 'GenericType':
      kind = 'Type'
    print '  kind: \'%s\';' % kind

  def end_type(self, name):
    print '}'

  def _js_type(self, type, plural):
    if plural:
      type = 'Array<%s>' % type
    return type

  def field(self, type, name, nullable, plural):
    nullable_char = '?' if nullable else ''
    js_type = self._js_type(type, plural)
    print '  %(name)s%(nullable_char)s: %(nullable_char)s%(js_type)s;' % locals()

  def start_union(self, name):
    print ('type %s = ' % name),
    self._current_options = []

  def union_option(self, type):
    self._current_options.append(type)

  def end_union(self, name):
    print '\n  | '.join(self._current_options)
    print
    self._current_options = None
