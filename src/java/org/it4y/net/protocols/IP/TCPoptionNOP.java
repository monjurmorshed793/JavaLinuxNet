package org.it4y.net.protocols.IP;

/**
 * Created by luc on 12/26/13.
 */
public class TCPoptionNOP implements TCPOption {
    public TCPoptionNOP() {}
    public String getName() {return "NOP";}
    public int getLength() {return 1;}
    public String toString() {return getName();}
}
