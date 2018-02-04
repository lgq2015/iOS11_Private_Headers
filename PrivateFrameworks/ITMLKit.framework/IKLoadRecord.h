/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKLoadRecord : NSObject {
    NSURL * _URL;
    bool  _loadCompleted;
    ISURLOperation * _opertaion;
    NSString * _scriptStr;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) bool loadCompleted;
@property (nonatomic, retain) ISURLOperation *opertaion;
@property (nonatomic, retain) NSString *scriptStr;

- (void).cxx_destruct;
- (id)URL;
- (bool)loadCompleted;
- (id)opertaion;
- (id)scriptStr;
- (void)setLoadCompleted:(bool)arg1;
- (void)setOpertaion:(id)arg1;
- (void)setScriptStr:(id)arg1;
- (void)setURL:(id)arg1;

@end
