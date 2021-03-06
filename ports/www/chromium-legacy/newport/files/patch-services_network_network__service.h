--- services/network/network_service.h.orig	2019-10-21 19:06:39 UTC
+++ services/network/network_service.h
@@ -152,7 +152,7 @@ class COMPONENT_EXPORT(NETWORK_SERVICE) NetworkService
       mojom::NetworkService::GetNetworkListCallback callback) override;
   void UpdateCRLSet(base::span<const uint8_t> crl_set) override;
   void OnCertDBChanged() override;
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   void SetCryptConfig(mojom::CryptConfigPtr crypt_config) override;
 #endif
 #if defined(OS_MACOSX) && !defined(OS_IOS)
