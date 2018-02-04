/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKProtocolTranslator : NSObject

+ (id)sharedInstance;

- (id)fieldValueFromObject:(id)arg1;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2;
- (int)fieldValueTypeFromObject:(id)arg1;
- (id)objectRepresentationFromFieldValue:(id)arg1;
- (id)pQueryFromQuery:(id)arg1 error:(id*)arg2;
- (id)pRecordIdentifierFromRecordID:(id)arg1;
- (id)pRecordIdentifierFromUserRecordName:(id)arg1;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1;
- (id)pReferenceFromReference:(id)arg1 error:(id*)arg2;
- (id)pUserIdentifierFromUserRecordName:(id)arg1;
- (id)recordFromPRecord:(id)arg1;
- (id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2;
- (id)referenceFromPReference:(id)arg1 error:(id*)arg2;

@end
