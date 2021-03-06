/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding> {
    NSString * _clientIDSuffix;
    int  _databaseInitOptions;
    NSString * _databasePath;
    bool  _enablePropertyModificationLogging;
    int  _management;
    bool  _unitTesting;
}

@property (nonatomic, retain) NSString *clientIDSuffix;
@property (nonatomic) int databaseInitOptions;
@property (nonatomic, retain) NSString *databasePath;
@property (nonatomic) bool enablePropertyModificationLogging;
@property (nonatomic) int management;
@property (nonatomic) bool unitTesting;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientIDSuffix;
- (int)databaseInitOptions;
- (id)databasePath;
- (id)description;
- (bool)enablePropertyModificationLogging;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToOptions:(id)arg1;
- (int)management;
- (void)setClientIDSuffix:(id)arg1;
- (void)setDatabaseInitOptions:(int)arg1;
- (void)setDatabasePath:(id)arg1;
- (void)setEnablePropertyModificationLogging:(bool)arg1;
- (void)setManagement:(int)arg1;
- (void)setUnitTesting:(bool)arg1;
- (bool)unitTesting;
- (id)validOptionsForConnection:(id)arg1;

@end
