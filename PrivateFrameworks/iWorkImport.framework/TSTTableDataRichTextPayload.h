/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTTableDataRichTextPayload : TSTTableDataObject {
    TSTRichTextPayload * mPayload;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithRichTextPayload:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
