/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukanjan <nukanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 14:58:19 by nukanjan          #+#    #+#             */
/*   Updated: 2026/09/20 18:18:45 by nukanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*array;
	size_t			max;
	size_t			total_bytes;
	size_t			i;

	max = (size_t) - 1;
	i = 0;
	if (nmemb != 0 && size > (max / nmemb))
		return (NULL);
	total_bytes = nmemb * size;
	array = malloc(total_bytes);
	if (!array)
		return (NULL);
	while (i < total_bytes)
	{
		array[i] = '\0';
		i++;
	}
	return ((void *)array);
}

//int main() {
//    int n = 5;
//    int *ptr;

//    ptr = (int*) ft_calloc(n, sizeof(int));

//    // ตรวจสอบว่าจัดสรรสำเร็จหรือไม่
//    if (ptr == NULL) {
//        printf("not complete!\n");
//        return 1;
//    }

//    // แสดงผลค่าเริ่มต้น (จะเห็นว่าเป็น 0 ทั้งหมดเพราะใช้ calloc)
//    printf("mem: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", ptr[i]);
//    }
//    printf("\n");

//    // คืนหน่วยความจำเมื่อใช้งานเสร็จ
//    free(ptr);

//    return 0;
//}