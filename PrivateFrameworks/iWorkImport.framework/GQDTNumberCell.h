/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTNumberCell : GQDTCell {
    GQDTComputedFormatSpec * mComputedFormat;
    double  mValue;
}

- (struct __CFString { }*)createStringValue;
- (void)dealloc;
- (int)readAttributesForNCell:(struct _xmlTextReader { }*)arg1;
- (int)readAttributesForNumberCell:(struct _xmlTextReader { }*)arg1;
- (double)value;

@end
