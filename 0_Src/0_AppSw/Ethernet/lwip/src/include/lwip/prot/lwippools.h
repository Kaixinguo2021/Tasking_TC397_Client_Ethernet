
/* Define three pools with sizes 256, 512, and 1512 bytes */
LWIP_MALLOC_MEMPOOL_START
LWIP_MALLOC_MEMPOOL(50, 256)
LWIP_MALLOC_MEMPOOL(20, 512)
LWIP_MALLOC_MEMPOOL(20, 1512)
LWIP_MALLOC_MEMPOOL_END



