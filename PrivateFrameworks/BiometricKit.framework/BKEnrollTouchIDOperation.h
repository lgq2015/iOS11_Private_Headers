/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKEnrollTouchIDOperation : BKEnrollOperation {
    struct { 
        int count; 
        int capa; 
        struct { /* ? */ } **items; 
        int unusedImageCount; 
        int componentCount; 
        int componentCapa; 
        int bestComponentIndex; 
        int bestMapiComponentIndex; 
        struct { /* ? */ } **components; 
        short mapiNodeAddedIndex; 
        short mapiNodeRemovedIndex; 
        int updateCount; 
        bool structureIsInconsistent; 
    }  _compSet;
    BiometricKitStatistics * _statistics;
}

@property (nonatomic) <BKEnrollTouchIDOperationDelegate> *delegate;

- (void).cxx_destruct;
- (id)createEnrollProgressInfo:(unsigned int)arg1;
- (void)dealloc;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)startWithError:(id*)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;

@end
