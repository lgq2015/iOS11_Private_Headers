/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPostBulletinRequestOptions : ASDRequestOptions {
    NSString * _actionButtonTitle;
    NSURL * _actionButtonURL;
    NSDate * _creationDate;
    unsigned long long  _destinations;
    NSURL * _launchURL;
    NSString * _message;
    NSString * _recordID;
    NSString * _title;
}

@property (nonatomic, copy) NSString *actionButtonTitle;
@property (nonatomic, copy) NSURL *actionButtonURL;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) unsigned long long destinations;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionButtonTitle;
- (id)actionButtonURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (unsigned long long)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)launchURL;
- (id)message;
- (id)recordID;
- (void)setActionButtonTitle:(id)arg1;
- (void)setActionButtonURL:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDestinations:(unsigned long long)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
