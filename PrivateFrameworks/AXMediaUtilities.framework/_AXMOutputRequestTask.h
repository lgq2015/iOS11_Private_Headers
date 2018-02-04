/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface _AXMOutputRequestTask : AXMTask {
    AXMOutputRequestDispatchOptions * _options;
    AXMOutputRequest * _request;
}

@property (nonatomic, retain) AXMOutputRequestDispatchOptions *options;
@property (nonatomic, retain) AXMOutputRequest *request;

- (void).cxx_destruct;
- (id)options;
- (id)request;
- (void)setOptions:(id)arg1;
- (void)setRequest:(id)arg1;

@end
