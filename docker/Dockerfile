FROM alpine:latest

# Install base requirements
RUN apk add --update alpine-sdk flex bison cmake python

COPY build.sh /data/build.sh

CMD ["/data/build.sh"]
