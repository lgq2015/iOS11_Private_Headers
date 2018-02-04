/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKSelectableGridTuple : TLKObject {
    double  _size;
    NSString * _subtitle;
    NSString * _title;
}

@property double size;
@property (retain) NSString *subtitle;
@property (retain) NSString *title;

+ (id)tupleWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)tuplesForTitles:(id)arg1 subtitles:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)observableProperties;
- (void)setSize:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (double)size;
- (id)subtitle;
- (id)title;

@end
