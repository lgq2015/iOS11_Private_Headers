/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCDumpBinaryToXmlState : NSObject {
    NSString * mCurrentFieldName;
    NSMutableDictionary * mFieldNameToValueMap;
}

- (void)cacheValueforCurrentField:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setCurrentField:(id)arg1;
- (id)valueForCurrentField;
- (id)valueForField:(id)arg1;

@end
