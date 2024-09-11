

#include <iostream>
#include <fstream>
#include <vector>

int main() {
    // Tamaño objetivo en megabytes
    const size_t targetMB = 200;
    // Tamaño del archivo en bytes
    const size_t targetBytes = targetMB * 1024 * 1024;  // 200 MB en bytes

    // Nombre del archivo
    std::string filename = "large_file.dat";

    // Crear y abrir el archivo en modo binario
    std::ofstream outFile(filename, std::ios::binary);
    if (!outFile) {
        std::cerr << "Error al abrir el archivo para escritura.\n";
        return 1;
    }

    // Datos para escribir en el archivo
    const size_t bufferSize = 1024 * 1024;  // 1 MB de datos por bloque
    std::vector<char> buffer(bufferSize, '0');  // Inicializar con '0'

    // Escribir bloques de datos hasta alcanzar el tamaño objetivo
    size_t bytesWritten = 0;
    while (bytesWritten < targetBytes) {
        // Calcular el tamaño del bloque de datos a escribir
        size_t toWrite = std::min(bufferSize, targetBytes - bytesWritten);

        // Escribir el bloque de datos
        outFile.write(buffer.data(), toWrite);
        if (!outFile) {
            std::cerr << "Error al escribir en el archivo.\n";
            return 1;
        }

        // Actualizar el número de bytes escritos
        bytesWritten += toWrite;
    }

    // Cerrar el archivo
    outFile.close();
    std::cout << "Archivo creado y llenado con éxito.\n";

    return 0;
}
