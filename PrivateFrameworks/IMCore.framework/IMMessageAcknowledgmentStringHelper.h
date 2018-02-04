/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessageAcknowledgmentStringHelper : NSObject

+ (id)bestAccountForAddress:(id)arg1;
+ (id)displayNameForAddress:(id)arg1;
+ (id)generateBackwardCompatibilityFormatStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 format:(long long*)arg3;
+ (id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2;
+ (id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)arg1 messageSummaryInfo:(id)arg2 isGroupMessage:(bool)arg3;
+ (id)generateFormatStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentSenderAddress:(id)arg2 messageSummaryInfo:(id)arg3 format:(long long*)arg4;
+ (id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentSenderAddress:(id)arg2 messageSummaryInfo:(id)arg3;
+ (id)generatePreviewStringForMessageAcknowledgmentType:(long long)arg1 acknowledgmentSenderAddress:(id)arg2 messageSummaryInfo:(id)arg3 isGroupMessage:(bool)arg4;
+ (id)handleForAddress:(id)arg1;
+ (bool)isLoginAddress:(id)arg1;
+ (id)longContentTypeStringForContentType:(id)arg1;
+ (id)longContentTypeStringForPluginBundleID:(id)arg1 pluginDisplayName:(id)arg2;
+ (id)messageAcknowledgmentString:(long long)arg1 lowercase:(bool)arg2;
+ (bool)shouldQuoteContentString:(id)arg1;

@end