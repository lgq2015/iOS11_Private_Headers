/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCShareAcceptationFault : BRCDocumentItem

- (id)asShareAcceptationFault;
- (void)deleteShareAcceptationFault;
- (id)initWithFilename:(id)arg1 itemID:(id)arg2 appLibrary:(id)arg3 clientZone:(id)arg4 sharingOptions:(unsigned long long)arg5;
- (bool)isShareAcceptationFault;
- (void)markLiveFromStageAsShareAcceptationFault;
- (void)stageShareAcceptationFaultWithName:(id)arg1;

@end
