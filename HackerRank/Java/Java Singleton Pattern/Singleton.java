import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.lang.reflect.*;


class Singleton{
    public static String str=null;
    private Singleton(){

    }
    public static Singleton getSingleInstance(){
        if(str == null){
            return new Singleton();
        }
        return null;
    }    
}