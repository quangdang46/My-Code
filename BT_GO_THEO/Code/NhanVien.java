public abstract class NhanVien{
    protected int ma;
    protected String ten;
    protected String gioiTinh;
    protected String ngaySinh;
    protected String diaChi;

    public NhanVien(int ma, String ten, String gioiTinh, String ngaySinh, String diaChi) {
        this.ma = ma;
        this.ten = ten;
        this.gioiTinh = gioiTinh;
        this.ngaySinh = ngaySinh;
        this.diaChi = diaChi;
    }
    public NhanVien(){

    }
    //get
    public int getMa() {
        return this.ma;
    }
    public String getTen() {
        return this.ten;
    }
    public String getGioiTinh() {
        return this.gioiTinh;
    }
    public String getNgaySinh() {
        return this.ngaySinh;
    }
    public String getDiaChi() {
        return this.diaChi;
    }
    //set
    public void setMa(int ma) {
        this.ma = ma;
    }
    public void setTen(String ten) {
        this.ten = ten;
    }
    public void setGioiTinh(String gioiTinh) {
        this.gioiTinh = gioiTinh;
    }
    public void setNgaySinh(String ngaySinh) {
        this.ngaySinh = ngaySinh;
    }
    public void setDiaChi(String diaChi) {
        this.diaChi = diaChi;
    }


    public abstract double tinhLuong();
    //toString
    @Override
    public String toString() {
        return this.ma + "_" + this.ten + "_" + this.gioiTinh + "_" + this.ngaySinh + "_" + this.diaChi;
    }




}