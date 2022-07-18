import java.lang.*;
import java.text.SimpleDateFormat;
import java.util.*;
import java.util.logging.Formatter;

import javax.swing.text.DateFormatter;
import javax.swing.text.SimpleAttributeSet;

class Address {
    String AddressLine;
    String City;
    String zip;
}

class NaturalPerson {
    Integer id;
    String name;
    Date dateofBirth;
    Integer age;
    Address address;
}

class LegalPerson {
    Integer id;
    String name;
    Integer numberofEmployees;
    Address address;
}

class Drived extends Address {
    Scanner sobj = new Scanner(System.in);

    public void Address() {
        System.out.println("Enter the Address");
        AddressLine = sobj.nextLine();
        System.out.println("Address is : " + AddressLine);
    }

    public void City() {
        System.out.println("Enter the City");
        City = sobj.nextLine();
        System.out.println("City is : " + City);
    }

    public void Zip() {
        System.out.println("Enter the Zip");
        zip = sobj.nextLine();
        System.out.println("Zip is : " + zip);
    }

}

class Personal extends NaturalPerson {
    Scanner sobj = new Scanner(System.in);

    public void ID() {
        System.out.println("Enter the ID");
        id = sobj.nextInt();
        System.out.println("id  is : " + id);
    }

    public void name() {
        System.out.println("Enter the Name");
        name = sobj.nextLine();
        System.out.println("Name is : " + name);
    }

    public void BirthdayDate() {
        String Date1 = "21/07/2022";
        // dateofBirth = new SimpleDateFormat("dd/mm/yyyy").parse(Date1);
        System.out.println("Date of Birth is : " + dateofBirth);
    }

    public void Age() {
        System.out.println("Enter the Age");
        age = sobj.nextInt();
        System.out.println("Age is : " + age);
    }

    public void AddressX() {
        System.out.println("Enter the Address");
        // address = sobj.next();
        System.out.println("Address is : " + address);
    }
}

class PersonalX extends LegalPerson {
    public void ID() {
        System.out.println("Enter the ID");
        id = sobj.nextInt();
        System.out.println("id  is : " + id);
    }

    public void name() {
        System.out.println("Enter the Name");
        name = sobj.nextLine();
        System.out.println("Name is : " + name);
    }

    public void Employees() {
        System.out.println("Enter the Number of Employees");
        numberofEmployees = sobj.nextInt();
        System.out.println("id  is : " + numberofEmployees);
    }

    public void AddressXx() {
        System.out.println("Enter the Address");
        // address = sobj.next();
        System.out.println("Address is : " + address);
    }
}

class pp {
    public static void main(String arg[]) {
        Drived dobj = new Drived();
        dobj.Address();
        dobj.City();
        dobj.Zip();

        Personal pobj = new Personal();
        pobj.ID();
        pobj.name();
        pobj.BirthdayDate();
        pobj.Age();
        pobj.AddressX();

        PersonalX ppobj = new PersonalX();
        ppobj.ID();
        ppobj.name();
        ppobj.Employees();
        ppobj.AddressXx();
    }
}