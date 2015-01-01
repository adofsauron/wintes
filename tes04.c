extern inline char *
strcpy (char *dest, const char *src)
{
  __asm__ ("cld\n"		// 清方向位。
	   "1:\tlodsb\n\t"	// 加载DS:[esi]处1 字节??al，并更新esi。
	   "stosb\n\t"		// 存储字节al??ES:[edi]，并更新edi。
	   "testb %%al,%%al\n\t"	// 刚存储的字节是0？
	   "jne 1b"		// 不是则向后跳转到标号1 处，否则结束。
::"S" (src), "D" (dest):"si", "di", "ax");
  return dest;			// 返回目的字符串指针。
}