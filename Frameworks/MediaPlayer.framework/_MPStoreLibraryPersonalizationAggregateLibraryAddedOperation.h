/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPStoreLibraryPersonalizationAggregateLibraryAddedOperation : MPAsyncOperation {
    MPMediaLibraryView * _libraryView;
    struct vector<long long, std::__1::allocator<long long> > { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long long *, std::__1::allocator<long long> > { 
            long long *__first_; 
        } __end_cap_; 
    }  _persistentIDs;
    id /* block */  _responseHandler;
}

@property (nonatomic) MPMediaLibraryView *libraryView;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<long long' */ struct  persistentIDs; /* unknown property attribute:  std::__1::allocator<long long> >=^q}} */
@property (nonatomic, copy) id /* block */ responseHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)execute;
- (id)libraryView;
- (struct vector<long long, std::__1::allocator<long long> > { long long *x1; long long *x2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_1_1; } x3; })persistentIDs;
- (id /* block */)responseHandler;
- (void)setLibraryView:(id)arg1;
- (void)setPersistentIDs:(struct vector<long long, std::__1::allocator<long long> > { long long *x1; long long *x2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_1_1; } x3; })arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
