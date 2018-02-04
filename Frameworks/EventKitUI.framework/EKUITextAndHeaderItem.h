/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUITextAndHeaderItem : NSObject {
    NSString * _header;
    long long  _lines;
    NSString * _text;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSString *header;
@property (nonatomic) long long lines;
@property (nonatomic, retain) NSString *text;

+ (id)itemWithText:(id)arg1 andHeader:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)header;
- (id)initWithDictionary:(id)arg1;
- (long long)lines;
- (void)setHeader:(id)arg1;
- (void)setLines:(long long)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
