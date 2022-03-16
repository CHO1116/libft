/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:10:47 by youngjch          #+#    #+#             */
/*   Updated: 2022/03/16 15:20:54 by youngjch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	//문자열 haystack에서 길이 len만큼의 범위 내에 문자열 needle이 있는지 확인하는 함수
	//있으면 찾은 지점의 포인터 반환
	//if needle == '\0' -> return (haystack);

	//example)	char	*haystack = "123458392"
	//			char	*needle1 = "45"
	//			char	*needle2 = "46"
	//			char	*needle3 = ""
	//			char	*needle4 = "4583"
	//			printf("return = "%s", strnstr(haystack, needle1, 9))
	//			printf("return = "%s", strnstr(haystack, needle2, 9))
	//			printf("return = "%s", strnstr(haystack, needle3, 9))
	//			printf("return = "%s", strnstr(haystack, needle4, 5))
	//output1 ->	return = 458392		(포인터를 반환받았으므로 해당 주소가 가리키는 값부터 끝까지 출력되는 것)
	//output2 ->	return = (null)		("46"과 같은 문자열을 찾지 못해 null 반환)
	//output3 ->	return = 123458392	(빈문자열을 찾고자 하면 haystack을 전부 반환)
	//output4 ->	return = (null)		(동일한 문자열이 있지만 len의 범위까지만 비교하기 때문에
	//									컴퓨터는 더 이상 비교 연산을 진행하지 않고 동일 문자열이 없다고 판단)
}
