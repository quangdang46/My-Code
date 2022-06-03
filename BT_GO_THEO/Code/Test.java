import java.util.*;
public class Test {
    private static final int nam=2022;
    private static ArrayList<NhanVien> nv;
    private static void InNhanVien(ArrayList<NhanVien> NVs){
        for(NhanVien nv : NVs){
            System.out.println(nv);
        }
    }
    private static ArrayList<NhanVien> NhanVien10M(){
        ArrayList<NhanVien> nv10M = new ArrayList<NhanVien>();
        for(NhanVien nhanvien : nv){
            if(nhanvien.getGioiTinh().equals("Nam") && (nam-Integer.parseInt(nhanvien.getNgaySinh()))>=30
                && nhanvien.tinhLuong()>=10000000){
                nv10M.add(nhanvien);
            }

        }
        return nv10M;
    }

    

    public static void main(String[] args) {
        nv = new ArrayList<NhanVien>();
        nv.add(new NVCongNhat(1, "Nguyen Van A", "Nam", "2000", "HN", 10));
        nv.add(new NVCongNhat(8, "Hoang Thi H", "Nu", "1987", "HCM", 10));
        nv.add(new NVSanXuat(9, "Hoang Thi I", "Nu", "2001", "HCM", 100));
        nv.add(new NVSanXuat(3, "Nguyen Van C", "Nam", "2001", "HN", 10));
        nv.add(new NVSanXuat(2, "Nguyen Van B", "Nam", "1981", "HN", 250));
        nv.add(new NVCongNhat(6, "Hoang Thi F", "Nu", "1975", "HCM", 30));
        nv.add(new NVCongNhat(7, "Hoang Thi G", "Nu", "2004", "HCM", 20));
        nv.add(new NVSanXuat(4, "Nguyen Van D", "Nam", "2000", "HN", 200));
        nv.add(new NVCongNhat(5, "Hoang Thi E", "Nu", "1883", "HCM", 40));

        InNhanVien(nv);
        System.out.println("\nNhan vien co luong tren 10M: ");
        // InNhanVien(NhanVien10M());
        ArrayList<NhanVien> nv10M = NhanVien10M();
        if(nv10M.size()==0){
            System.out.println("Khong co nhan vien co luong tren 10M");
        }
        else{
            InNhanVien(nv10M);
        }


    }

}
