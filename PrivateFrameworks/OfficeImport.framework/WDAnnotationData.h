/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDAnnotationData : NSObject {
    NSDate * mDate;
    NSString * mOwner;
    WDText * mText;
}

- (id)date;
- (void)dealloc;
- (id)initWithText:(id)arg1;
- (id)owner;
- (void)setDate:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)text;

@end
