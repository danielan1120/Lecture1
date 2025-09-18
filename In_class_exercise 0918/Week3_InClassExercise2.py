class A:
    def hello(self):
        print("Hello from A")
class B(A):
    def hello(self):
        print("Hello from B")
        super().hello()
class C(A):
    def hello(self):
        print("Hello from C")
        super().hello()
class D(B, C):
    def hello(self):
        print("Hello from D")
        super().hello()
class E(C):
    def hello(self):
        print("Hello from E")
        super().hello()
class F(B, E):
    def hello(self):
        print("Hello from F")
        super().hello()
class G(C, B):
    def hello(self):
        print("Hello from G")
        super().hello()
class H(D, G):
    def hello(self):
        print("Hello from H")
        super().hello()

print(F.mro())
