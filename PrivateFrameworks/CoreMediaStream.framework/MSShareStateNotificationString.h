/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSShareStateNotificationString : NSObject {
    NSString * _body;
    NSString * _sourcePersonID;
    NSString * _title;
}

@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSString *sourcePersonID;
@property (nonatomic, retain) NSString *title;

+ (id)notificationStringsWithTitle:(id)arg1 body:(id)arg2 sourcePersonID:(id)arg3;

- (void).cxx_destruct;
- (id)body;
- (id)initWithTitle:(id)arg1 body:(id)arg2 sourcePersonID:(id)arg3;
- (void)setBody:(id)arg1;
- (void)setSourcePersonID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourcePersonID;
- (id)title;

@end
