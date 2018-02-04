/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSDocumentProxy : LSResourceProxy <NSSecureCoding> {
    NSString * _MIMEType;
    NSURL * _URL;
    NSString * _containerOwnerApplicationIdentifier;
    bool  _isContentManaged;
    NSString * _name;
    struct { 
        unsigned int val[8]; 
    }  _sourceAuditToken;
    NSString * _typeIdentifier;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *containerOwnerApplicationIdentifier;
@property (getter=isContentManaged, nonatomic, readonly) bool contentManaged;
@property (getter=isImageOrVideo, readonly) bool imageOrVideo;
@property (nonatomic, readonly) const struct { unsigned int x1[8]; }*managedSourceAuditToken;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) const struct { unsigned int x1[8]; }*sourceAuditToken;
@property (nonatomic, readonly) bool sourceIsManaged;
@property (nonatomic, readonly) NSString *typeIdentifier;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(bool)arg4 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg5;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 managedSourceAuditToken:(const struct { unsigned int x1[8]; }*)arg4;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(bool)arg4;
+ (id)documentProxyForURL:(id)arg1;
+ (id)documentProxyForURL:(id)arg1 isContentManaged:(bool)arg2 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg3;
+ (id)documentProxyForURL:(id)arg1 managedSourceAuditToken:(const struct { unsigned int x1[8]; }*)arg2;
+ (id)documentProxyForURL:(id)arg1 sourceIsManaged:(bool)arg2;
+ (bool)supportsSecureCoding;

- (id)MIMEType;
- (id)URL;
- (id)_boundDocumentProxy;
- (id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id*)arg1;
- (id)applicationsAvailableForOpeningFromAirDropWithError:(id*)arg1;
- (id)applicationsAvailableForOpeningWithError:(id*)arg1;
- (id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id*)arg2;
- (id)applicationsAvailableForOpeningWithTypeDeclarer:(bool)arg1 style:(unsigned char)arg2 XPCConnection:(id)arg3 error:(id*)arg4;
- (id)containerOwnerApplicationIdentifier;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 isContentManaged:(bool)arg5 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg6;
- (bool)isContentManaged;
- (bool)isImageOrVideo;
- (const struct { unsigned int x1[8]; }*)managedSourceAuditToken;
- (id)name;
- (const struct { unsigned int x1[8]; }*)sourceAuditToken;
- (bool)sourceIsManaged;
- (id)typeIdentifier;
- (id)uniqueIdentifier;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceURL:(id)arg4;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (struct CGSize { double x1; double x2; })_defaultStyleSize:(id)arg1;
- (struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;

@end
