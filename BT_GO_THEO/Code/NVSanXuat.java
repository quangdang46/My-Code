public class NVSanXuat extends NhanVien {
    private int soSanPham;
    public NVSanXuat(int ma, String ten, String gioiTinh, String ngaySinh, String diaChi,int soSanPham) {
        super(ma, ten, gioiTinh, ngaySinh, diaChi);
        this.soSanPham = soSanPham;
    }
    public NVSanXuat(){

    }
    public int getSoSanPham() {
        return this.soSanPham;
    }
    public void setSoSanPham(int soSanPham) {
        this.soSanPham = soSanPham;
    }
    @Override
    public double tinhLuong() {
        return this.soSanPham*20000;
    }
    @Override
    public String toString() {
        return super.toString() + "_" + this.soSanPham;
    }
}
