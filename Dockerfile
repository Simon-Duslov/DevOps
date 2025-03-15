FROM ubuntu:latest

COPY isPrime.deb /tmp/isPrime.deb

#WORKDIR /pr3

RUN apt-get update && apt-get install -y debhelper dpkg-dev && rm -rf /var/lib/apt/lists/*

RUN dpkg -i /tmp/isPrime.deb

RUN chmod +x /usr/bin/isPrime

CMD [ "/usr/bin/isPrime" ]