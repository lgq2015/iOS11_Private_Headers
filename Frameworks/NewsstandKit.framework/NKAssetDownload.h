/* made by EzioChiu
   Image: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
 */

@interface NKAssetDownload : NSObject {
    bool  _attemptedConnection;
    NSURLConnection * _connection;
    NSString * _identifier;
    bool  _isDecodingValid;
    NKIssue * _issue;
    NSURLRequest * _request;
    NSData * _userInfoData;
}

@property (copy) NSURLRequest *URLRequest;
@property bool attemptedConnection;
@property (retain) NSURLConnection *connection;
@property (copy) NSString *identifier;
@property (readonly) NKIssue *issue;
@property (copy) NSDictionary *userInfo;
@property (retain) NSData *userInfoData;

- (id)URLRequest;
- (bool)_attemptedConnection;
- (void)_cancel;
- (id)_connection;
- (void)_connectionBackgroundDownloadPostCompleted:(id)arg1;
- (void)_connectionBackgroundDownloadPreCompleted:(id)arg1;
- (id)_initWithURLRequest:(id)arg1 issue:(id)arg2;
- (bool)_isDecodingValid;
- (void)_issueWasRemovedFromLibrary;
- (void)_setIssue:(id)arg1;
- (bool)attemptedConnection;
- (id)connection;
- (void)dealloc;
- (id)description;
- (id)downloadWithDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)issue;
- (void)setAttemptedConnection:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIssue:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoData:(id)arg1;
- (id)userInfo;
- (id)userInfoData;

@end
