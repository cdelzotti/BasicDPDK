#define SERVER_DEVICE 2
#define CLIENT_DEVICE 2

struct rte_ether_addr CLIENT_MAC = {
    .addr_bytes = {0x08, 0xc8, 0xeb, 0xbf, 0xef, 0x8e}
};

struct rte_ether_addr SERVER_MAC = {
    .addr_bytes = {0x08, 0xc0, 0xeb, 0xbf, 0xee, 0xc2}
};

struct payload {
	uint16_t data;
} __rte_packed;

const uint8_t CLIENT_IP_PRETTY[4] = {10,42,0,2};
const uint8_t SERVER_IP_PRETTY[4] = {10,42,0,1};

const uint32_t CLIENT_IP = CLIENT_IP_PRETTY[0] << 24 | CLIENT_IP_PRETTY[1] << 16 | CLIENT_IP_PRETTY[2] << 8 | CLIENT_IP_PRETTY[3];
const uint32_t SERVER_IP = SERVER_IP_PRETTY[0] << 24 | SERVER_IP_PRETTY[1] << 16 | SERVER_IP_PRETTY[2] << 8 | SERVER_IP_PRETTY[3];
