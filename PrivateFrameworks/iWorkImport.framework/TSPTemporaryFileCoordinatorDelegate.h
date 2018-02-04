/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPTemporaryFileCoordinatorDelegate : NSObject <TSPFileCoordinatorDelegate> {
    NSURL * _URL;
}

@property (nonatomic, copy) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)performReadUsingAccessor:(id /* block */)arg1;
- (void)setURL:(id)arg1;

@end
