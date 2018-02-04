/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchChaptersOperation : CATOperation {
    NSString * mIdentifier;
    NSString * mIdentifierType;
    NSString * mPath;
}

- (void).cxx_destruct;
- (id)initWithBook:(id)arg1;
- (id)initWithBookPath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3;
- (bool)isAsynchronous;
- (void)main;
- (void)parseOFPPackageContentsOperationDidFinish:(id)arg1;
- (void)parseOPFFilePathOperationDidFinish:(id)arg1;
- (void)parseTableOfContentsOperationDidFinish:(id)arg1;

@end
