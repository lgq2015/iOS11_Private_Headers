/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSSharingProtocol : NSObject {
    struct __MSShPCContext { 
        struct __MSSPCContext { 
            void *owner; 
            struct __CFString {} *personID; 
            struct __CFString {} *authToken; 
            struct __CFDictionary {} *deviceInfo; 
            struct __CFDictionary {} *clientHeadersRef; 
            double connectionTimeout; 
            int (*__didReceiveDataCallback)(); 
            int (*__didFinishCallback)(); 
            int (*__didFailAuthenticationCallback)(); 
            int (*__didReceiveServerSideConfigVersionCallback)(); 
            int (*__didReceiveRetryAfterCallback)(); 
            struct CFURLConnectionClient_V1 {} *__client; 
            struct _CFURLConnection {} *__connection; 
            struct __CFData {} *__responseData; 
            struct __CFHTTPMessage {} *__response; 
            struct __CFError {} *__error; 
        } _super; 
        int (*didFindShareStateCallback)(); 
        int (*didFinishTransactionCallback)(); 
        int (*didFailAuthenticationCallback)(); 
        int (*didReceiveServerSideConfigurationVersionCallback)(); 
        int __contextType; 
    }  _context;
    <MSSharingProtocolDelegate> * _delegate;
    NSURL * _inviteURL;
    NSURL * _manageURL;
    NSString * _personID;
    NSURL * _respondURL;
    NSArray * _shares;
    NSURL * _statusURL;
    int  _transactionType;
}

@property (nonatomic) <MSSharingProtocolDelegate> *delegate;
@property (nonatomic, readonly) NSString *personID;

+ (id)_dictShareStateFromShareState:(int)arg1;
+ (id)_invalidFieldErrorWithFieldName:(id)arg1;
+ (id)_shareDictFromShare:(id)arg1;
+ (id)_shareDictsArrayFromShares:(id)arg1;
+ (id)_shareFromShareDict:(id)arg1;
+ (int)_shareStateFromShareDictShareState:(id)arg1;
+ (id)_sharesFromShareDictsArray:(id)arg1;
+ (id)shareFromPushUserInfo:(id)arg1 outSourcePersonID:(id*)arg2 outTargetPersonID:(id*)arg3 outError:(id*)arg4;
+ (id)shareStateFromProtocol:(id)arg1;

- (void).cxx_destruct;
- (void)_checkForFailedInvitesWithResponse:(id)arg1;
- (void)_didFailAuthenticationWithError:(id)arg1;
- (void)_didFindServerSideConfigurationVersion:(id)arg1;
- (void)_didFindShareState:(id)arg1;
- (void)_didFinishTransactionWithResponseObject:(id)arg1 error:(id)arg2;
- (void)abort;
- (void)dealloc;
- (id)delegate;
- (void)deleteShares:(id)arg1;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)modifyShares:(id)arg1;
- (id)personID;
- (void)requestCurrentShareState;
- (void)sendInvitations:(id)arg1;
- (void)sendResponseToInvitation:(id)arg1 accept:(bool)arg2;
- (void)setDelegate:(id)arg1;

@end
