class FlyingMachines {
    public void fly() {
        System.out.println("No implementation");
    }

    public void testAlititude(FlyingMachines fm) {
        fm.fly();
    }
}

class Jet extends FlyingMachines {
    public void fly() {
        System.out.println("Start, Taxi, Fly");
    }

    public void bombardment() {
        System.out.println("Throw Missile");
    }
}

class Aeroplane extends FlyingMachines {
    public void fly() {
        System.out.println("Aeroplane, Fly");
    }

    public void bombardment() {
        System.out.println("Throw Missile");
    }
}

public class PolymorphicTest {
    public static void main(String[] args) {
        FlyingMachines f = new FlyingMachines();
        FlyingMachines flm = new Jet();
        FlyingMachines fm1 = new Aeroplane();

        f.testAlititude(flm);

        f.testAlititude(fm1);
    }
}