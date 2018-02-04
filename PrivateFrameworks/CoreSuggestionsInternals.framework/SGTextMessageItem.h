/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTextMessageItem : NSObject {
    NSString * _content;
    NSArray * _features;
    NSString * _language;
    SGTextMessage * _message;
}

@property (readonly) NSString *content;
@property (retain) NSArray *features;
@property (readonly) NSString *language;
@property (readonly) SGTextMessage *message;

- (void).cxx_destruct;
- (id)content;
- (void)encodeWithCoder:(id)arg1;
- (id)features;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextMessage:(id)arg1;
- (id)language;
- (id)message;
- (void)setFeatures:(id)arg1;

@end
