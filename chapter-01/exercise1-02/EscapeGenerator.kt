import java.io.File

fun main() {

    var index = 1
    for (s in '!'..'~') {
        if (s == 'n' || s == '\\' || s == 't' || s == 'b' || s == '\"'|| s.isUpperCase()) continue
        val filename = "${index.toString().padStart(2,'0')}.c"
        var file = File(filename)
        val code = """
        #include <stdio.h>
        
        int main() {
            printf("test escape \\$s : \$s");
            return 0;
        }
        """.trimIndent()
        file.writeText(code)
        index++
    }
}
