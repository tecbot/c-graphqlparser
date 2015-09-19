# Copyright (c) 2015, Facebook, Inc.
# All rights reserved.
#
# This source code is licensed under the BSD-style license found in the
# LICENSE file in the root directory of this source tree. An additional grant
# of patent rights can be found in the PATENTS file in the same directory.

from casing import snake
from license import C_LICENSE_COMMENT

class Printer(object):
  '''Printer for a simple list of types to be visited by the C visitor.
  '''

  def __init__(self):
    self._types = []

  def start_file(self):
    print C_LICENSE_COMMENT + '/** @generated */'
    print '#define FOR_EACH_CONCRETE_TYPE(MACRO) \\'

  def start_type(self, name):
    self._types.append(name)

  def field(self, type, name, nullable, plural):
    pass

  def end_type(self, name):
    pass

  def end_file(self):
    print ' \\\n'.join('MACRO(%s, %s)' % (name, snake(name)) for name in self._types)

  def start_union(self, name):
    pass

  def union_option(self, option):
    pass

  def end_union(self, name):
    pass
