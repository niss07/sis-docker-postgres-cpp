# 1) Base image: içinde C++ derleyicisi olan hazır bir Linux
FROM gcc:12

# 2) Container içinde çalışacağımız klasör
WORKDIR /app

# 3) Kaynak kodları container içine kopyala
COPY . .

# 4) C++ dosyasını derle
RUN g++ -std=c++17 src/main.cpp -o app

# 5) Container çalışınca bu komut çalışsın
CMD ["./app"]
