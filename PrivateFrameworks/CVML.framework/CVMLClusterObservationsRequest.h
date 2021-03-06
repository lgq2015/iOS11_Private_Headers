/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLClusterObservationsRequest : CVMLRequest {
    NSError * _initializationError;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalCancelRequestWithHandler:(id)arg1 error:(id*)arg2;
- (bool)internalProcessWithHandler:(id)arg1 error:(id*)arg2;

@end
