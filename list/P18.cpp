bool del_min(SqList &L, ElemType &value) {
    // 删除顺序表L中的最小值元素节点，并通过value返回
    // 如果删除成功，返回true，否则返回false
    if (L.length == 0)
        return false;
    int pos = 0;
    value = L.data[pos];
    for (int i = 1; i < L.length; ++i) {
        if (L.data[i] < value) {
            value = L.data[i];
            pos = i;
        }
            
        
    }
    L.data[pos] = L.data[L.length - 1];
    L.length--;
    return true;
}

// -------------------------------------------------
void reverse(SqList &L) {
    // 将顺序表的所有元素逆置
    // 要求空间复杂度O(1)
    ElemType temp = L.data[0];
    for (int i = 0; i < L.length / 2; ++i) {
        temp = L.data[i];
        L.data[i] = L.data[L.length - 1 - i];
        L.data[L.length - 1 - i] = temp;
    }
}

// -------------------------------------------------
void del_x(SqList &L) {
    // 长度为n的顺序表L，编写一个时间复杂度为O(n)，空间复杂度为O(1)的算法
    // 该算法删除线性表中所有值为x的数据元素
    int k = 0;
    for(int i = 0; i < L.length; ++i) {
        if(L.data[i] != x) {
            L.data[k] = L.data[i];
            k++;
        }
    }
    L.length = k;
}

// -------------------------------------------------
bool del_s_t(SqList &L, ElemType s, ElemType t) {
    // 从有序顺序表中删除其值在给定值s与t之间（要求s<t）的所有元素，如果s或t不合理，或者顺序表为空，则显示出错信息并退出运行
    if (L.length == 0)
        return false;
    if(s >= t)
        return false;
    int begin = -1;
    int end = -1;
    for (int i = 0; i < L.length; ++i) {
        if (L.data[i] >= s && begin == -1)
            begin = i;
        if (L.data[i] <=t)
            end = i;
    }
    if (begin == -1)
        return false; // 顺序表中的所有元素都小于s
    if (end == -1)
        return false; // 顺序表中的所有元素都大于t
    end++;  // end指向第一个大于t的元素
    for(;end < L.length; begin++, end++)
        L.data[begin] = L.data[end];
    L.length = begin + 1;
    return true;
}

// -------------------------------------------------
bool del_s_t_sq(SqList &L, ElemType s, ElemType t) {
    // 从顺序表中删除其值在s和t之间的元素
    if(s >= t || L.length == 0)
        return false;
    int idx;
    for(int i = 0; i < L.length; ++i) {
        if (L.data[i] < s || L.data[i] > t) {
            L.data[idx] = L.data[i];
            idx++;
        }
    }
    L.length = idx;
    return true;
}

// -------------------------------------------------
bool del_repeated_elem(SqList &L) {
    // 从有序顺序表中删除所有其值重复的元素
    if (L.length == 0)
        return false;
    int i, j;   // i记录第一个不相同的元素，j为工作指针
    for (i = 0, j = 1; j < L.length; j++) {
        if (L.data[i] != L.data[j])
            L.data[++i] = L.data[j];
    }
    L.length = i + 1;
    return true;
}

// -------------------------------------------------
bool merge(SqList A, SqList B, SqList &C) {
    // 将两个有序顺序表合并成一个新的有序顺序表，并返回新的顺序表
    if (A.length + B.length > C.length)
        return false;   // 新顺序表长度不足
    int i = 0, j = 0, k = 0;
    while(i < A.length && j < B.length) {
        if (A.data[i] <= B.data[j])
            C.data[k++] = A.data[i++];
        else
            C.data[k++] = B.data[j++];
    }
    while(i < A.length)
        C.data[k++] = A.data[i++];
    while(j < B.length)
        C.data[k++] = B.data[j++];
    C.length = k + 1;
    return true;
}

// -------------------------------------------------
// A[m+n]中依次存放着两个顺序表(a1, a2, ..., am)和(b1, b2, ..., bm)，要求将数组中的两个顺序表的位置互换
void reverse_array(int A[], int left, int right, int size) {
    if (left >= right || right >= size)
        return;
    int mid = (left + right) / 2;
    for (int i = 0; i < mid - left + 1; ++i) {
        int temp = A[left + i];
        A[left + i] = A[right - i];
        A[right - i] = temp;
    }
}

bool exchange(int A[], int m, int n, int size) {
    reverse_array(A, 0, m + n - 1, size);
    reverse_array(A, 0, n - 1, size);
    reverse_array(A, n, m + n - 1, size);
}

// -------------------------------------------------

void search_exchange_or_insert(ElemType A[], ElemType x, int n) {
    int low = 0, high = n - 1;
    int mid;
    while(low <= high) {    // 二分查找
        mid = (low + high) / 2;
        if (A[mid] == x)
            break;
        else if (A[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (A[mid] == x && mid != n - 1) {  // 找到且不是线性表的最后一个元素，执行交换
        ElemType temp = A[mid];
        A[mid] = A[n - 1];
        A[n - 1] = temp;
    }
    if (low > high) {
        for (int i = n - 1; i > high ; --i) {   // 未找到，执行插入操作
            A[i + 1] = A[i];
        }
        A[i + 1] = x;
    }
}