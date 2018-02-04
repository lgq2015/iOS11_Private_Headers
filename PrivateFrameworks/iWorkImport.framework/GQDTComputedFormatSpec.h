/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTComputedFormatSpec : NSObject {
    id  mFormat;
}

- (void)dealloc;
- (id)format;
- (bool)isDateFormat;
- (bool)isDurationFormat;
- (bool)isNumberFormat;

@end
