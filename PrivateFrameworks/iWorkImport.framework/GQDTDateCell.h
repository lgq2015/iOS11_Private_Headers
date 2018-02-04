/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTDateCell : GQDTCell {
    GQDTComputedFormatSpec * mComputedFormat;
    struct __CFDate { } * mDate;
}

- (struct __CFString { }*)createStringValue;
- (struct __CFDate { }*)date;
- (void)dealloc;
- (struct __CFString { }*)getDateFormat;
- (int)readAttributesForDateCell:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;

@end
