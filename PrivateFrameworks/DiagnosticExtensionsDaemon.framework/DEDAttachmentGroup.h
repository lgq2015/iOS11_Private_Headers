/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDAttachmentGroup : NSObject {
    NSArray * _attachmentItems;
    NSString * _deviceID;
    NSString * _displayName;
    NSString * _extensionID;
    DEDBugSession * _fromBugSession;
    NSURL * _rootURL;
}

@property (retain) NSArray *attachmentItems;
@property (retain) NSString *deviceID;
@property (retain) NSString *displayName;
@property (retain) NSString *extensionID;
@property (retain) DEDBugSession *fromBugSession;
@property (retain) NSURL *rootURL;

+ (id)groupWithDEGroup:(id)arg1 identifier:(id)arg2;
+ (id)groupWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)archiveName;
- (id)attachmentItems;
- (id)description;
- (id)deviceID;
- (id)displayName;
- (id)extensionID;
- (id)fromBugSession;
- (bool)isLocal;
- (id)rootURL;
- (id)serialize;
- (void)setAttachmentItems:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExtensionID:(id)arg1;
- (void)setFromBugSession:(id)arg1;
- (void)setRootURL:(id)arg1;
- (id)totalFilesize;

@end
