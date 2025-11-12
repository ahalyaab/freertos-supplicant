# Cross Compiler Configuration
CROSS ?= aarch64-none-elf-gcc

# Compiler flags
CFLAGS = -mcpu=cortex-a72 \
         -fpic \
         -ffreestanding \
         -std=gnu99 \
         -O2 \
         -Wall \
         -Wextra \
	 -nostdlib \
         -DGUEST \
         -DFREERTOS \
	 -DCONFIG_MACSEC \
	 -DCONFIG_TDLS \
	 -DIEEE8021X_EAPOL \
	 -DCONFIG_HS20 \
	 -DCONFIG_WPS \
	 -D__LITTLE_ENDIAN=1234 \
	 -D__BIG_ENDIAN=4321 \
         -D__BYTE_ORDER=__LITTLE_ENDIAN \
	 -DCONFIG_INTERWORKING \
	 -DCONFIG_IEEE80211AX \
	 -DNEED_AP_MLME \
	 -DCONFIG_DPP \
	 -DCONFIG_P2P \
	 -DCONFIG_CTRL_IFACE_DBUS_NEW \
	 -DCONFIG_AP \
	 -DCONFIG_WNM \
	 -DCONFIG_WIFI_DISPLAY \
	 -DCONFIG_CTRL_IFACE \
	 -DCONFIG_SME \
	 -DCONFIG_GAS \
	 -DCONFIG_GAS_SERVER \
	 -DCONFIG_BGSCAN \
         -I$(INCLUDEPATH1) \
         -I$(INCLUDEPATH2) \
         -I$(INCLUDEPATH3) \
         -I$(INCLUDEPATH4) \
         -I$(INCLUDEPATH5) \
         -I$(INCLUDEPATH6) \
         -I$(INCLUDEPATH7) \
         -I$(INCLUDEPATH8) \
         -I$(INCLUDEPATH9) \
         -I$(INCLUDEPATH10) \
         -I$(INCLUDEPATH11) \
         -I$(INCLUDEPATH12) \
         -I$(INCLUDEPATH13) \
         -I$(INCLUDEPATH14) \
         -I$(INCLUDEPATH15) \
         -I$(INCLUDEPATH16) \
         -I$(INCLUDEPATH17) \
         -I$(INCLUDEPATH18) \
         -I$(INCLUDEPATH19) \
         -I$(INCLUDEPATH20) \
         -I$(INCLUDEPATH21) \
	 -I$(INCLUDEPATH22) \
	 -Isrc
 
BUILTIN_OPS = -fno-builtin-memset
ASMFLAGS = -mcpu=cortex-a72
INCLUDEPATH1 ?=hs20/client
INCLUDEPATH2 ?= src/utils
INCLUDEPATH3 ?= src/common
INCLUDEPATH4 ?= src/ap
INCLUDEPATH5 ?= src/crypto
INCLUDEPATH6 ?= src/drivers
INCLUDEPATH7 ?= src/eap_common
INCLUDEPATH8 ?=src/eapol_auth
INCLUDEPATH9 ?=src/eapol_supp
INCLUDEPATH10 ?=src/eapol_peer
INCLUDEPATH11 ?= src/eapol_server
INCLUDEPATH12 ?= src/fst
INCLUDEPATH13 ?= src/l2_packet
INCLUDEPATH14 ?= src/p2p
INCLUDEPATH15 ?= src/pae
INCLUDEPATH16 ?= src/pasn
INCLUDEPATH17 ?= src/radius
INCLUDEPATH18 ?= src/rsn_supp
INCLUDEPATH19 ?= src/tls
INCLUDEPATH20 ?= src/wps
INCLUDEPATH21 ?= wpa_supplicant
INCLUDEPATH22 ?= porting/inc
#INCLUDEPATH23 ?= src

# Source directory (path where your source files are located)
SRCDIR = ./src
WPA_SRCDIR = ./wpa_supplicant
WPASUPP_SRCDIR = .

# Build directory
BUILDDIR = ./build

# Source directories for pae and p2p

P2P_SRCDIR                = $(SRCDIR)/p2p
WPS_SRCDIR                = $(SRCDIR)/wps
L2_PACKET_SRCDIR          = $(SRCDIR)/l2_packet
DRIVERS_SRCDIR            = $(SRCDIR)/drivers
UTILS_SRCDIR              = $(SRCDIR)/utils
RSNSUPP_SRCDIR            = $(SRCDIR)/rsn_supp
EAP_PEER_SRCDIR           = $(SRCDIR)/eap_peer
AP_SRCDIR                 = $(SRCDIR)/ap
CRYPTO_SRCDIR             = $(SRCDIR)/crypto
COMMON_SRCDIR             = $(SRCDIR)/common
EAPOL_AUTH_SRCDIR         = $(SRCDIR)/eapol_auth
EAP_COMMON_SRCDIR         = $(SRCDIR)/eap_common
EAPOL_SUPP_SRCDIR         = $(SRCDIR)/eapol_supp
EAP_SERVER_SRCDIR         = $(SRCDIR)/eap_server
PAE_SRCDIR		  = $(SRCDIR)/pae
PASN_SRCDIR               = $(SRCDIR)/pasn
DBUS_WPA_SRCDIR           = $(WPA_SRCDIR)/dbus
WPA_SUPP_SRCDIR           = $(WPA_SRCDIR)
WPASUPPLI_SRCDIR          = $(WPASUPP_SRCDIR)/porting/src
RADIUS_SRCDIR		  = $(SRCDIR)/radius
TLS_SRCDIR  = $(SRCDIR)/tls


# List of source files in p2p directory
P2P_SOURCES = $(P2P_SRCDIR)/p2p_dev_disc.c $(P2P_SRCDIR)/p2p_build.c $(P2P_SRCDIR)/p2p_invitation.c \
              $(P2P_SRCDIR)/p2p_utils.c $(P2P_SRCDIR)/p2p_go_neg.c $(P2P_SRCDIR)/p2p.c \
              $(P2P_SRCDIR)/p2p_group.c $(P2P_SRCDIR)/p2p_sd.c $(P2P_SRCDIR)/p2p_parse.c \
              $(P2P_SRCDIR)/p2p_pd.c
#list of pasn
PASN_SOURCES = $(PASN_SRCDIR)/pasn_responder.c
TLS_SOURCES  = $(TLS_SRCDIR)/asn1.c
#list of pae
PAE_SOURCES = $(PAE_SRCDIR)/ieee802_1x_cp.c \
              $(PAE_SRCDIR)/ieee802_1x_kay.c \
              $(PAE_SRCDIR)/ieee802_1x_key.c \
              $(PAE_SRCDIR)/ieee802_1x_secy_ops.c

# List of source files in wps directory
WPS_SOURCES = $(WPS_SRCDIR)/wps.c \
              $(WPS_SRCDIR)/wps_common.c \
              $(WPS_SRCDIR)/wps_attr_build.c \
              $(WPS_SRCDIR)/wps_enrollee.c \
              $(WPS_SRCDIR)/wps_attr_process.c \
              $(WPS_SRCDIR)/wps_attr_parse.c \
              $(WPS_SRCDIR)/wps_dev_attr.c \
              $(WPS_SRCDIR)/wps_registrar.c 

# List of source files in l2packet directory
L2_PACKET_SOURCES = $(L2_PACKET_SRCDIR)/l2_packet_linux.c 

# List of source files in drivers directory
DRIVERS_SOURCES = $(DRIVERS_SRCDIR)/driver_common.c \
                  $(DRIVERS_SRCDIR)/driver_wired.c \
                  $(DRIVERS_SRCDIR)/driver_wired_common.c \
                  $(DRIVERS_SRCDIR)/driver_nl80211_capa.c \
                  $(DRIVERS_SRCDIR)/driver_nl80211_event.c \
                  $(DRIVERS_SRCDIR)/driver_nl80211_monitor.c \
                  $(DRIVERS_SRCDIR)/driver_nl80211_scan.c \
                  $(DRIVERS_SRCDIR)/netlink.c \
                  $(DRIVERS_SRCDIR)/rfkill.c \
                  $(DRIVERS_SRCDIR)/drivers.c \
		  $(DRIVERS_SRCDIR)/driver_macsec_linux.c \
		  $(DRIVERS_SRCDIR)/driver_nl80211.c


# Comment out or remove these lines
#DRIVERS += driver_wext.c
#DRIVERS += linux_ioctl.c



# List of source files in utils directory
UTILS_SOURCES = $(UTILS_SRCDIR)/wpa_debug.c $(UTILS_SRCDIR)/common.c $(UTILS_SRCDIR)/config.c $(UTILS_SRCDIR)/ip_addr.c $(UTILS_SRCDIR)/crc32.c\
                $(UTILS_SRCDIR)/wpabuf.c $(UTILS_SRCDIR)/radiotap.c \
                $(UTILS_SRCDIR)/base64.c \
                $(UTILS_SRCDIR)/os_unix.c $(UTILS_SRCDIR)/bitfield.c \
                $(UTILS_SRCDIR)/json.c \
          	$(UTILS_SRCDIR)/eloop.c \
                $(UTILS_SRCDIR)/uuid.c $(UTILS_SRCDIR)/edit_simple.c 
               


#List of source files in rsn_supp directory
RSNSUPP_SOURCES= $(RSNSUPP_SRCDIR)/tdls.c  $(RSNSUPP_SRCDIR)/wpa_ie.c $(RSNSUPP_SRCDIR)/wpa.c \
		 $(RSNSUPP_SRCDIR)/preauth.c $(RSNSUPP_SRCDIR)/wpa_ft.c $(RSNSUPP_SRCDIR)/pmksa_cache.c

#List of source files in eap_peer directory
EAP_PEER_SOURCES = $(EAP_PEER_SRCDIR)/eap_tls.c \
                   $(EAP_PEER_SRCDIR)/eap_peap.c \
                   $(EAP_PEER_SRCDIR)/eap_ttls.c \
                   $(EAP_PEER_SRCDIR)/eap_md5.c \
                   $(EAP_PEER_SRCDIR)/eap_mschapv2.c \
                   $(EAP_PEER_SRCDIR)/mschapv2.c \
                   $(EAP_PEER_SRCDIR)/eap_gtc.c \
                   $(EAP_PEER_SRCDIR)/eap_otp.c \
                   $(EAP_PEER_SRCDIR)/eap_leap.c \
                   $(EAP_PEER_SRCDIR)/eap_fast.c \
                   $(EAP_PEER_SRCDIR)/eap_fast_pac.c \
                   $(EAP_PEER_SRCDIR)/eap_pax.c \
                   $(EAP_PEER_SRCDIR)/eap_sake.c \
                   $(EAP_PEER_SRCDIR)/eap_gpsk.c \
                   $(EAP_PEER_SRCDIR)/eap_pwd.c \
                   $(EAP_PEER_SRCDIR)/eap_wsc.c \
                   $(EAP_PEER_SRCDIR)/eap_ikev2.c \
                   $(EAP_PEER_SRCDIR)/ikev2.c \
                   $(EAP_PEER_SRCDIR)/eap_tnc.c $(EAP_PEER_SRCDIR)/tncc.c $(EAP_PEER_SRCDIR)/eap_methods.c \
		   $(EAP_PEER_SRCDIR)/eap_tls_common.c $(EAP_PEER_SRCDIR)/eap.c

AP_SOURCES = $(AP_SRCDIR)/ap_config.c \
             $(AP_SRCDIR)/ap_mlme.c \
             $(AP_SRCDIR)/authsrv.c \
             $(AP_SRCDIR)/ctrl_iface_ap.c \
             $(AP_SRCDIR)/hostapd.c \
             $(AP_SRCDIR)/ieee802_11.c \
             $(AP_SRCDIR)/wpa_auth.c \
             $(AP_SRCDIR)/wpa_auth_glue.c \
             $(AP_SRCDIR)/ieee802_11_ht.c \
             $(AP_SRCDIR)/ieee802_11_vht.c \
             $(AP_SRCDIR)/ieee802_1x.c \
             $(AP_SRCDIR)/ieee802_11_auth.c \
             $(AP_SRCDIR)/ieee802_11_shared.c \
             $(AP_SRCDIR)/drv_callbacks.c \
             $(AP_SRCDIR)/ap_drv_ops.c \
             $(AP_SRCDIR)/beacon.c \
             $(AP_SRCDIR)/bss_load.c \
             $(AP_SRCDIR)/eap_user_db.c \
             $(AP_SRCDIR)/neighbor_db.c \
             $(AP_SRCDIR)/wmm.c \
             $(AP_SRCDIR)/ap_list.c \
             $(AP_SRCDIR)/comeback_token.c \
             $(AP_SRCDIR)/hw_features.c \
             $(AP_SRCDIR)/dfs.c \
             $(AP_SRCDIR)/gas_query_ap.c \
             $(AP_SRCDIR)/hs20.c \
             $(AP_SRCDIR)/wpa_auth_ie.c \
             $(AP_SRCDIR)/pmksa_cache_auth.c \
	     $(AP_SRCDIR)/p2p_hostapd.c \
	     $(AP_SRCDIR)/rrm.c \
	     $(AP_SRCDIR)/utils.c \
	     $(AP_SRCDIR)/sta_info.c \
	     $(AP_SRCDIR)/tkip_countermeasures.c $(AP_SRCDIR)/ieee802_11_he.c $(AP_SRCDIR)/wps_hostapd.c $(AP_SRCDIR)/gas_serv.c \
	     $(AP_SRCDIR)/wpa_auth_kay.c $(AP_SRCDIR)/dpp_hostapd.c
		
# list of crypto files
CRYPTO_SOURCES = $(CRYPTO_SRCDIR)/aes-siv.c \
                 $(CRYPTO_SRCDIR)/aes-ctr.c \
                 $(CRYPTO_SRCDIR)/sha256-kdf.c \
                 $(CRYPTO_SRCDIR)/sha384-kdf.c \
                 $(CRYPTO_SRCDIR)/sha512-kdf.c \
                 $(CRYPTO_SRCDIR)/sha256-prf.c \
                 $(CRYPTO_SRCDIR)/sha256-tlsprf.c \
                 $(CRYPTO_SRCDIR)/sha384-prf.c \
                 $(CRYPTO_SRCDIR)/sha512-prf.c \
                 $(CRYPTO_SRCDIR)/dh_groups.c \
                 $(CRYPTO_SRCDIR)/random.c \
                 $(CRYPTO_SRCDIR)/sha1-prf.c \
                 $(CRYPTO_SRCDIR)/sha1-tprf.c \
                 $(CRYPTO_SRCDIR)/sha1-tlsprf.c \
		 $(CRYPTO_SRCDIR)/ms_funcs.c \
		 $(CRYPTO_SRCDIR)/aes-encblock.c $(CRYPTO_SRCDIR)/crypto_openssl.c $(CRYPTO_SRCDIR)/tls_openssl.c $(CRYPTO_SRCDIR)/tls_openssl_ocsp.c

COMMON_SOURCES = $(COMMON_SRCDIR)/ptksa_cache.c \
                 $(COMMON_SRCDIR)/wpa_common.c \
                 $(COMMON_SRCDIR)/sae.c \
                 $(COMMON_SRCDIR)/dpp_backup.c \
                 $(COMMON_SRCDIR)/dpp_reconfig.c \
                 $(COMMON_SRCDIR)/dpp_tcp.c \
                 $(COMMON_SRCDIR)/dragonfly.c \
                 $(COMMON_SRCDIR)/ieee802_11_common.c \
                 $(COMMON_SRCDIR)/hw_features_common.c \
                 $(COMMON_SRCDIR)/gas_server.c \
                 $(COMMON_SRCDIR)/gas.c \
		 $(COMMON_SRCDIR)/wpa_ctrl.c \
		 $(COMMON_SRCDIR)/cli.c $(COMMON_SRCDIR)/dpp.c \
		 $(COMMON_SRCDIR)/ctrl_iface_common.c $(COMMON_SRCDIR)/dpp_auth.c $(COMMON_SRCDIR)/dpp_crypto.c $(COMMON_SRCDIR)/dpp_pkex.c

EAPOL_SUPP_SOURCES = $(EAPOL_SUPP_SRCDIR)/eapol_supp_sm.c
EAPOL_AUTH_SOURCES = $(EAPOL_AUTH_SRCDIR)/eapol_auth_sm.c

#list of eap_common
EAP_COMMON_SOURCES = $(EAP_COMMON_SRCDIR)/eap_peap_common.c \
                     $(EAP_COMMON_SRCDIR)/eap_fast_common.c \
                     $(EAP_COMMON_SRCDIR)/eap_pax_common.c \
                     $(EAP_COMMON_SRCDIR)/eap_sake_common.c \
                     $(EAP_COMMON_SRCDIR)/eap_gpsk_common.c \
                     $(EAP_COMMON_SRCDIR)/eap_pwd_common.c \
                     $(EAP_COMMON_SRCDIR)/eap_wsc_common.c \
                     $(EAP_COMMON_SRCDIR)/eap_ikev2_common.c \
                     $(EAP_COMMON_SRCDIR)/ikev2_common.c \
                     $(EAP_COMMON_SRCDIR)/eap_common.c \
		     $(EAP_COMMON_SRCDIR)/chap.c \

#list of eap_server
EAP_SERVER_SOURCES = $(EAP_SERVER_SRCDIR)/eap_server.c \
                     $(EAP_SERVER_SRCDIR)/eap_server_identity.c \
                     $(EAP_SERVER_SRCDIR)/eap_server_methods.c \
                     $(EAP_SERVER_SRCDIR)/eap_server_wsc.c
#list of dbus
DBUS_WPA_SOURCES = $(DBUS_WPA_SRCDIR)/dbus_new_helpers.c \
               $(DBUS_WPA_SRCDIR)/dbus_new_handlers.c \
               $(DBUS_WPA_SRCDIR)/dbus_common.c \
               $(DBUS_WPA_SRCDIR)/dbus_new_handlers_wps.c \
               $(DBUS_WPA_SRCDIR)/dbus_new_introspect.c \
	       $(DBUS_WPA_SRCDIR)/dbus_new.c \
	       $(DBUS_WPA_SRCDIR)/dbus_new_handlers_p2p.c \
	       $(DBUS_WPA_SRCDIR)/dbus_dict_helpers.c


#listd of wpa_supplicant
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/config.c
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/bss.c
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/notify.c
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/eap_register.c
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/twt.c
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/config_file.c
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/wnm_sta.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/ibss_rsn.c 
WPA_SUPP_SOURCES +=  $(WPA_SUPP_SRCDIR)/p2p_supplicant_sd.c 
WPA_SUPP_SOURCES +=  $(WPA_SUPP_SRCDIR)/hs20_supplicant.c 
WPA_SUPP_SOURCES +=  $(WPA_SUPP_SRCDIR)/wifi_display.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/rrm.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/op_classes.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/wmm_ac.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/robust_av.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/wps_supplicant.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/wpas_kay.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/ctrl_iface_unix.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/sme.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/bgscan_simple.c 
WPA_SUPP_SOURCES +=$(WPA_SUPP_SRCDIR)/bgscan.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/offchannel.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/wpa_supplicant.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/events.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/bssid_ignore.c 
WPA_SUPP_SOURCES +=  $(WPA_SUPP_SRCDIR)/wpas_glue.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/scan.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/main.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/wpa_cli.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/wpa_passphrase.c 
WPA_SUPP_SOURCES += $(WPA_SUPP_SRCDIR)/interworking.c 
WPA_SUPP_SOURCES +=$(WPA_SUPP_SRCDIR)/ap.c 
WPA_SUPP_SOURCES +=$(WPA_SUPP_SRCDIR)/ctrl_iface.c 
WPA_SUPP_SOURCES +=$(WPA_SUPP_SRCDIR)/gas_query.c 
WPA_SUPP_SOURCES +=$(WPA_SUPP_SRCDIR)/dpp_supplicant.c 
WPA_SUPP_SOURCES +=$(WPA_SUPP_SRCDIR)/p2p_supplicant.c

#WPASUPPLI_SOURCES += $(WPASUPPLI_SRCDIR)/my_memory_utils.c
#WPASUPPLI_SOURCES += $(WPASUPPLI_SRCDIR)/panic.c


# Combine the sources from both directories
SOURCES = $(WPASUPPLI_SOURCES) $(WPA_SUPP_SOURCES) $(TLS_SOURCES) $(P2P_SOURCES) $(PASN_SOURCES) $(PAE_SOURCES) $(WPS_SOURCES) $(L2_PACKET_SOURCES) $(DRIVERS_SOURCES) $(UTILS_SOURCES) $(RSNSUPP_SOURCES) $(EAP_PEER_SOURCES) $(AP_SOURCES) $(CRYPTO_SOURCES) $(COMMON_SOURCES) $(EAPOL_SUPP_SOURCES) $(EAPOL_AUTH_SOURCES) $(EAP_COMMON_SOURCES) $(EAP_SERVER_SOURCES) $(DBUS_WPA_SOURCES)

# Add object files for all the sources from directories
OBJS = $(patsubst $(SRCDIR)/%.c,build/%.o,$(SOURCES)) \
       $(patsubst $(WPA_SRCDIR)/%.c,build/%.o,$(SOURCES)) \
       #$(patsubst $(WPASUPPLI_SRCDIR)/%.c,build/%.o,$(SOURCES))

# Default target
all: builddir $(OBJS)

# Ensure build directory exists
builddir:
	@mkdir -p $(BUILDDIR)/p2p
	@mkdir -p $(BUILDDIR)/pasn
	@mkdir -p $(BUILDDIR)/tls
	@mkdir -p $(BUILDDIR)/pae
	@mkdir -p $(BUILDDIR)/wps
	@mkdir -p $(BUILDDIR)/l2_packet
	@mkdir -p $(BUILDDIR)/drivers
	@mkdir -p $(BUILDDIR)/utils
	@mkdir -p $(BUILDDIR)/rsn_supp
	@mkdir -p $(BUILDDIR)/eap_peer
	@mkdir -p $(BUILDDIR)/ap
	@mkdir -p $(BUILDDIR)/crypto
	@mkdir -p $(BUILDDIR)/common
	@mkdir -p $(BUILDDIR)/eapol_supp
	@mkdir -p $(BUILDDIR)/eapol_auth
	@mkdir -p $(BUILDDIR)/eap_common
	@mkdir -p $(BUILDDIR)/eap_server
	@mkdir -p $(BUILDDIR)/dbus
	@mkdir -p $(BUILDDIR)/wpa_supplicant
	@mkdir -p $(BUILDDIR)/porting/src


# Rule to compile .c files into .o files
$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	$(CROSS) $(CFLAGS) -c -o $@ $<

$(BUILDDIR)/%.o: $(WPA_SRCDIR)/%.c
	$(CROSS) $(CFLAGS) -c -o $@ $<

# Link object files to create the executable
wpa_supplicant: $(OBJS)
	$(CROSS) -o wpa_supplicant $(OBJS)

# Clean rule to remove generated files
clean:
	rm -rf $(BUILDDIR)/*.o 
	rm -rf build/*

# Phony targets
.PHONY: all clean builddir 

