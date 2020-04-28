//the package is the project created by the netbeans IDE.
package javaapplication6;
import com.mathworks.engine.*; //import matlab external interface engine

/*
   The class StartMatlab, connects to ashared matlab session by name, executes the 
user script 'ddc2.m' and calculates the time taken in seconds. The resulting cluster
of 49 million x 2 dimesions is shown in the output.
*/
public class StartMatlab {
   public static void main(String[] args) throws Exception{
       long start = System.currentTimeMillis();
       String key="Matlab2406"; //change name of session when needed
        MatlabEngine eng = MatlabEngine.connectMatlab(key);
        eng.eval("run('ddc2.m')");
        eng.close();
        long end = System.currentTimeMillis();
        float sec = (end - start) / 1000F; System.out.println(sec + " seconds");
    }
};
/*
The javaFindConnect class, according to the matlab external interfaces documentation, 
can be used to find a matlab session and connect to it, instaed of connecting 
specifically by session name, as the StartMatlab does above. 
*/
/*
public class javaFindConnect {
    public static void main(String[] args) throws Exception {
        String[] engines = MatlabEngine.findMatlab();
        MatlabEngine eng = MatlabEngine.connectMatlab(engines[0]);
        // Execute command on shared MATLAB session
        eng.close();
    }
}*/


