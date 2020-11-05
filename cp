app:
  build:
    context: SpringStartKit
    dockerfile: Dockerfile
  ports:
    - "8080:8080"
  depends_on:
    - db
sdfsfs
