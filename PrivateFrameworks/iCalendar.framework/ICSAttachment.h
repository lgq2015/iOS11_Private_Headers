/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSAttachment : ICSProperty

@property (nonatomic, retain) NSString *fmtype;
@property (nonatomic, retain) NSString *managed_filename;
@property (nonatomic, retain) NSString *managed_id;
@property (nonatomic) int size;
@property (nonatomic) bool x_apple_autoarchived;
@property (nonatomic, retain) NSString *x_apple_ews_attachmentid;
@property (nonatomic, retain) NSString *x_apple_filename;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)filename;
- (id)fmtype;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isBinary;
- (id)managed_filename;
- (id)managed_id;
- (void)setData:(id)arg1;
- (void)setFmtype:(id)arg1;
- (void)setManaged_filename:(id)arg1;
- (void)setManaged_id:(id)arg1;
- (void)setSize:(int)arg1;
- (void)setURL:(id)arg1;
- (void)setX_apple_autoarchived:(bool)arg1;
- (void)setX_apple_ews_attachmentid:(id)arg1;
- (void)setX_apple_filename:(id)arg1;
- (bool)shouldObscureValue;
- (int)size;
- (bool)x_apple_autoarchived;
- (id)x_apple_ews_attachmentid;
- (id)x_apple_filename;

@end
