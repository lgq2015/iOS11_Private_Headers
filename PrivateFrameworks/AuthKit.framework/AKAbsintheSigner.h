/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAbsintheSigner : NSObject {
    struct NACContextOpaque_ { } * _context;
    NSDate * _contextCreationDate;
}

+ (id)sharedSigner;

- (void).cxx_destruct;
- (struct NACContextOpaque_ { }*)_createSigningContext;
- (void)_destroySigningContext;
- (bool)_didSigningContextExpire;
- (void)dealloc;
- (id)signatureForURLRequest:(id)arg1;

@end
