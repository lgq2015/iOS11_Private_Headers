/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBWorkbook : NSObject

+ (struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)createSheetNamesFromWorkbook:(id)arg1;
+ (void)readDocumentPresentation:(id)arg1 state:(id)arg2;
+ (void)readDocumentProperties:(id)arg1 state:(id)arg2;
+ (id)readWithState:(id)arg1 reader:(id)arg2;
+ (void)setupProcessors:(id)arg1;
+ (int)xlSheetTypeEnumFromEDSheet:(id)arg1;

@end
