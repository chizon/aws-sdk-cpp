/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_RDS_API ModifyDBInstanceRequest : public RDSRequest
  {
  public:
    ModifyDBInstanceRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The DB instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    /*
     <p> The DB instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifier = value; }

    /*
     <p> The DB instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifier.assign(value); }

    /*
     <p> The DB instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest&  WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The DB instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing DB instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The new storage capacity of the RDS instance. Changing this setting does not result in an outage and the change is applied during the next maintenance window unless <code>ApplyImmediately</code> is set to <code>true</code> for this request. </p> <p> <b>MySQL</b> </p> <p>Default: Uses existing setting</p> <p>Valid Values: 5-3072</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p> <p> <b>PostgreSQL</b> </p> <p>Default: Uses existing setting</p> <p>Valid Values: 5-3072</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p> <p> <b>Oracle</b> </p> <p>Default: Uses existing setting</p> <p>Valid Values: 10-3072</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p> <b>SQL Server</b> </p> <p>Cannot be modified.</p> <p> If you choose to migrate your DB instance from using standard storage to using Provisioned IOPS, or from using Provisioned IOPS to using standard storage, the process can take time. The duration of the migration depends on several factors such as database load, storage size, storage type (standard or Provisioned IOPS), amount of IOPS provisioned (if any), and the number of prior scale storage operations. Typical migration times are under 24 hours, but the process can take up to several days in some cases. During the migration, the DB instance will be available for use, but may experience performance degradation. While the migration takes place, nightly backups for the instance will be suspended. No other Amazon RDS operations can take place for the instance, including modifying the instance, rebooting the instance, deleting the instance, creating a Read Replica for the instance, and creating a DB snapshot of the instance. </p>
    */
    inline long GetAllocatedStorage() const{ return m_allocatedStorage; }
    /*
     <p> The new storage capacity of the RDS instance. Changing this setting does not result in an outage and the change is applied during the next maintenance window unless <code>ApplyImmediately</code> is set to <code>true</code> for this request. </p> <p> <b>MySQL</b> </p> <p>Default: Uses existing setting</p> <p>Valid Values: 5-3072</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p> <p> <b>PostgreSQL</b> </p> <p>Default: Uses existing setting</p> <p>Valid Values: 5-3072</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p> <p> <b>Oracle</b> </p> <p>Default: Uses existing setting</p> <p>Valid Values: 10-3072</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p> <b>SQL Server</b> </p> <p>Cannot be modified.</p> <p> If you choose to migrate your DB instance from using standard storage to using Provisioned IOPS, or from using Provisioned IOPS to using standard storage, the process can take time. The duration of the migration depends on several factors such as database load, storage size, storage type (standard or Provisioned IOPS), amount of IOPS provisioned (if any), and the number of prior scale storage operations. Typical migration times are under 24 hours, but the process can take up to several days in some cases. During the migration, the DB instance will be available for use, but may experience performance degradation. While the migration takes place, nightly backups for the instance will be suspended. No other Amazon RDS operations can take place for the instance, including modifying the instance, rebooting the instance, deleting the instance, creating a Read Replica for the instance, and creating a DB snapshot of the instance. </p>
    */
    inline void SetAllocatedStorage(long value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /*
     <p> The new storage capacity of the RDS instance. Changing this setting does not result in an outage and the change is applied during the next maintenance window unless <code>ApplyImmediately</code> is set to <code>true</code> for this request. </p> <p> <b>MySQL</b> </p> <p>Default: Uses existing setting</p> <p>Valid Values: 5-3072</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p> <p> <b>PostgreSQL</b> </p> <p>Default: Uses existing setting</p> <p>Valid Values: 5-3072</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p>Type: Integer</p> <p> <b>Oracle</b> </p> <p>Default: Uses existing setting</p> <p>Valid Values: 10-3072</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value.</p> <p> <b>SQL Server</b> </p> <p>Cannot be modified.</p> <p> If you choose to migrate your DB instance from using standard storage to using Provisioned IOPS, or from using Provisioned IOPS to using standard storage, the process can take time. The duration of the migration depends on several factors such as database load, storage size, storage type (standard or Provisioned IOPS), amount of IOPS provisioned (if any), and the number of prior scale storage operations. Typical migration times are under 24 hours, but the process can take up to several days in some cases. During the migration, the DB instance will be available for use, but may experience performance degradation. While the migration takes place, nightly backups for the instance will be suspended. No other Amazon RDS operations can take place for the instance, including modifying the instance, rebooting the instance, deleting the instance, creating a Read Replica for the instance, and creating a DB snapshot of the instance. </p>
    */
    inline ModifyDBInstanceRequest&  WithAllocatedStorage(long value) { SetAllocatedStorage(value); return *this;}

    /*
     <p> The new compute and memory capacity of the DB instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this setting causes an outage during the change and is applied during the next maintenance window, unless <code>ApplyImmediately</code> is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium</code></p>
    */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    /*
     <p> The new compute and memory capacity of the DB instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this setting causes an outage during the change and is applied during the next maintenance window, unless <code>ApplyImmediately</code> is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium</code></p>
    */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /*
     <p> The new compute and memory capacity of the DB instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this setting causes an outage during the change and is applied during the next maintenance window, unless <code>ApplyImmediately</code> is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium</code></p>
    */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /*
     <p> The new compute and memory capacity of the DB instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this setting causes an outage during the change and is applied during the next maintenance window, unless <code>ApplyImmediately</code> is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium</code></p>
    */
    inline ModifyDBInstanceRequest&  WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /*
     <p> The new compute and memory capacity of the DB instance. To determine the instance classes that are available for a particular DB engine, use the <a>DescribeOrderableDBInstanceOptions</a> action. </p> <p> Passing a value for this setting causes an outage during the change and is applied during the next maintenance window, unless <code>ApplyImmediately</code> is specified as <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium</code></p>
    */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /*
     <p> A list of DB security groups to authorize on this DB instance. Changing this setting does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }
    /*
     <p> A list of DB security groups to authorize on this DB instance. Changing this setting does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetDBSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /*
     <p> A list of DB security groups to authorize on this DB instance. Changing this setting does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest&  WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}

    /*
     <p> A list of DB security groups to authorize on this DB instance. Changing this setting does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /*
     <p> A list of DB security groups to authorize on this DB instance. Changing this setting does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /*
     <p> A list of EC2 VPC security groups to authorize on this DB instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    /*
     <p> A list of EC2 VPC security groups to authorize on this DB instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /*
     <p> A list of EC2 VPC security groups to authorize on this DB instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest&  WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /*
     <p> A list of EC2 VPC security groups to authorize on this DB instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /*
     <p> A list of EC2 VPC security groups to authorize on this DB instance. This change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be 1 to 255 alphanumeric characters</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /*
     <p>Specifies whether the modifications in this request and any pending modifications are asynchronously applied as soon as possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for the DB instance. </p> <p> If this parameter is set to <code>false</code>, changes to the DB instance are applied during the next maintenance window. Some parameter changes can cause an outage and will be applied on the next call to <a>RebootDBInstance</a>, or the next failure reboot. Review the table of parameters in <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.DBInstance.html#Overview.DBInstance.Modifying">Modifying a DB Instance and Using the Apply Immediately Parameter</a> to see the impact that setting <code>ApplyImmediately</code> to <code>true</code> or <code>false</code> has for each modified parameter and to determine when the changes will be applied. </p> <p>Default: <code>false</code></p>
    */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }
    /*
     <p>Specifies whether the modifications in this request and any pending modifications are asynchronously applied as soon as possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for the DB instance. </p> <p> If this parameter is set to <code>false</code>, changes to the DB instance are applied during the next maintenance window. Some parameter changes can cause an outage and will be applied on the next call to <a>RebootDBInstance</a>, or the next failure reboot. Review the table of parameters in <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.DBInstance.html#Overview.DBInstance.Modifying">Modifying a DB Instance and Using the Apply Immediately Parameter</a> to see the impact that setting <code>ApplyImmediately</code> to <code>true</code> or <code>false</code> has for each modified parameter and to determine when the changes will be applied. </p> <p>Default: <code>false</code></p>
    */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /*
     <p>Specifies whether the modifications in this request and any pending modifications are asynchronously applied as soon as possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for the DB instance. </p> <p> If this parameter is set to <code>false</code>, changes to the DB instance are applied during the next maintenance window. Some parameter changes can cause an outage and will be applied on the next call to <a>RebootDBInstance</a>, or the next failure reboot. Review the table of parameters in <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.DBInstance.html#Overview.DBInstance.Modifying">Modifying a DB Instance and Using the Apply Immediately Parameter</a> to see the impact that setting <code>ApplyImmediately</code> to <code>true</code> or <code>false</code> has for each modified parameter and to determine when the changes will be applied. </p> <p>Default: <code>false</code></p>
    */
    inline ModifyDBInstanceRequest&  WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}

    /*
     <p> The new password for the DB instance master user. Can be any printable ASCII character except "/", """, or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a primary instance user if the password is lost. This includes restoring privileges that may have been accidentally revoked. </note>
    */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    /*
     <p> The new password for the DB instance master user. Can be any printable ASCII character except "/", """, or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a primary instance user if the password is lost. This includes restoring privileges that may have been accidentally revoked. </note>
    */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /*
     <p> The new password for the DB instance master user. Can be any printable ASCII character except "/", """, or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a primary instance user if the password is lost. This includes restoring privileges that may have been accidentally revoked. </note>
    */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /*
     <p> The new password for the DB instance master user. Can be any printable ASCII character except "/", """, or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a primary instance user if the password is lost. This includes restoring privileges that may have been accidentally revoked. </note>
    */
    inline ModifyDBInstanceRequest&  WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /*
     <p> The new password for the DB instance master user. Can be any printable ASCII character except "/", """, or "@".</p> <p> Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. Between the time of the request and the completion of the request, the <code>MasterUserPassword</code> element exists in the <code>PendingModifiedValues</code> element of the operation response. </p> <p>Default: Uses existing setting</p> <p>Constraints: Must be 8 to 41 alphanumeric characters (MySQL), 8 to 30 alphanumeric characters (Oracle), or 8 to 128 alphanumeric characters (SQL Server).</p> <note> Amazon RDS API actions never return the password, so this action provides a way to regain access to a primary instance user if the password is lost. This includes restoring privileges that may have been accidentally revoked. </note>
    */
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}

    /*
     <p> The name of the DB parameter group to apply to the DB instance. Changing this setting does not result in an outage. The parameter group name itself is changed immediately, but the actual parameter changes are not applied until you reboot the instance without failover. The db instance will NOT be rebooted automatically and the parameter changes will NOT be applied during the next maintenance window. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB parameter group must be in the same DB parameter group family as this DB instance.</p>
    */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }
    /*
     <p> The name of the DB parameter group to apply to the DB instance. Changing this setting does not result in an outage. The parameter group name itself is changed immediately, but the actual parameter changes are not applied until you reboot the instance without failover. The db instance will NOT be rebooted automatically and the parameter changes will NOT be applied during the next maintenance window. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB parameter group must be in the same DB parameter group family as this DB instance.</p>
    */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /*
     <p> The name of the DB parameter group to apply to the DB instance. Changing this setting does not result in an outage. The parameter group name itself is changed immediately, but the actual parameter changes are not applied until you reboot the instance without failover. The db instance will NOT be rebooted automatically and the parameter changes will NOT be applied during the next maintenance window. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB parameter group must be in the same DB parameter group family as this DB instance.</p>
    */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /*
     <p> The name of the DB parameter group to apply to the DB instance. Changing this setting does not result in an outage. The parameter group name itself is changed immediately, but the actual parameter changes are not applied until you reboot the instance without failover. The db instance will NOT be rebooted automatically and the parameter changes will NOT be applied during the next maintenance window. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB parameter group must be in the same DB parameter group family as this DB instance.</p>
    */
    inline ModifyDBInstanceRequest&  WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /*
     <p> The name of the DB parameter group to apply to the DB instance. Changing this setting does not result in an outage. The parameter group name itself is changed immediately, but the actual parameter changes are not applied until you reboot the instance without failover. The db instance will NOT be rebooted automatically and the parameter changes will NOT be applied during the next maintenance window. </p> <p>Default: Uses existing setting</p> <p>Constraints: The DB parameter group must be in the same DB parameter group family as this DB instance.</p>
    */
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}

    /*
     <p> The number of days to retain automated backups. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p>Changing this parameter can result in an outage if you change from 0 to a non-zero value or from a non-zero value to 0. These changes are applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If you change the parameter from one non-zero value to another non-zero value, the change is asynchronously applied as soon as possible.</p> <p>Default: Uses existing setting</p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 35</li> <li>Can be specified for a MySQL Read Replica only if the source is running MySQL 5.6</li> <li>Can be specified for a PostgreSQL Read Replica only if the source is running PostgreSQL 9.3.5</li> <li>Cannot be set to 0 if the DB instance is a source to Read Replicas</li> </ul>
    */
    inline long GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    /*
     <p> The number of days to retain automated backups. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p>Changing this parameter can result in an outage if you change from 0 to a non-zero value or from a non-zero value to 0. These changes are applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If you change the parameter from one non-zero value to another non-zero value, the change is asynchronously applied as soon as possible.</p> <p>Default: Uses existing setting</p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 35</li> <li>Can be specified for a MySQL Read Replica only if the source is running MySQL 5.6</li> <li>Can be specified for a PostgreSQL Read Replica only if the source is running PostgreSQL 9.3.5</li> <li>Cannot be set to 0 if the DB instance is a source to Read Replicas</li> </ul>
    */
    inline void SetBackupRetentionPeriod(long value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /*
     <p> The number of days to retain automated backups. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p>Changing this parameter can result in an outage if you change from 0 to a non-zero value or from a non-zero value to 0. These changes are applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If you change the parameter from one non-zero value to another non-zero value, the change is asynchronously applied as soon as possible.</p> <p>Default: Uses existing setting</p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 35</li> <li>Can be specified for a MySQL Read Replica only if the source is running MySQL 5.6</li> <li>Can be specified for a PostgreSQL Read Replica only if the source is running PostgreSQL 9.3.5</li> <li>Cannot be set to 0 if the DB instance is a source to Read Replicas</li> </ul>
    */
    inline ModifyDBInstanceRequest&  WithBackupRetentionPeriod(long value) { SetBackupRetentionPeriod(value); return *this;}

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline ModifyDBInstanceRequest&  WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, as determined by the <code>BackupRetentionPeriod</code>. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints:</p> <ul> <li>Must be in the format hh24:mi-hh24:mi</li> <li>Times should be Universal Time Coordinated (UTC)</li> <li>Must not conflict with the preferred maintenance window</li> <li>Must be at least 30 minutes</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline ModifyDBInstanceRequest&  WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /*
     <p> The weekly time range (in UTC) during which system maintenance can occur, which may result in an outage. Changing this parameter does not result in an outage, except in the following situation, and the change is asynchronously applied as soon as possible. If there are pending actions that cause a reboot, and the maintenance window is changed to include the current time, then changing this parameter will cause a reboot of the DB instance. If moving this window to the current time, there must be at least 30 minutes between the current time and end of the window to ensure pending changes are applied. </p> <p>Default: Uses existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
    */
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /*
     <p> Specifies if the DB instance is a Multi-AZ deployment. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Constraints: Cannot be specified if the DB instance is a Read Replica.</p>
    */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    /*
     <p> Specifies if the DB instance is a Multi-AZ deployment. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Constraints: Cannot be specified if the DB instance is a Read Replica.</p>
    */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /*
     <p> Specifies if the DB instance is a Multi-AZ deployment. Changing this parameter does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Constraints: Cannot be specified if the DB instance is a Read Replica.</p>
    */
    inline ModifyDBInstanceRequest&  WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a non-default DB parameter group is currently in use, a new DB parameter group in the DB parameter group family for the new engine version must be specified. The new DB parameter group can be the default for that DB parameter group family. </p> <p>For a list of valid engine versions, see <a>CreateDBInstance</a>.</p>
    */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a non-default DB parameter group is currently in use, a new DB parameter group in the DB parameter group family for the new engine version must be specified. The new DB parameter group can be the default for that DB parameter group family. </p> <p>For a list of valid engine versions, see <a>CreateDBInstance</a>.</p>
    */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a non-default DB parameter group is currently in use, a new DB parameter group in the DB parameter group family for the new engine version must be specified. The new DB parameter group can be the default for that DB parameter group family. </p> <p>For a list of valid engine versions, see <a>CreateDBInstance</a>.</p>
    */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a non-default DB parameter group is currently in use, a new DB parameter group in the DB parameter group family for the new engine version must be specified. The new DB parameter group can be the default for that DB parameter group family. </p> <p>For a list of valid engine versions, see <a>CreateDBInstance</a>.</p>
    */
    inline ModifyDBInstanceRequest&  WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /*
     <p> The version number of the database engine to upgrade to. Changing this parameter results in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p> For major version upgrades, if a non-default DB parameter group is currently in use, a new DB parameter group in the DB parameter group family for the new engine version must be specified. The new DB parameter group can be the default for that DB parameter group family. </p> <p>For a list of valid engine versions, see <a>CreateDBInstance</a>.</p>
    */
    inline ModifyDBInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /*
     <p> Indicates that major version upgrades are allowed. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints: This parameter must be set to true when specifying a value for the EngineVersion parameter that is a different major version than the DB instance's current version.</p>
    */
    inline bool GetAllowMajorVersionUpgrade() const{ return m_allowMajorVersionUpgrade; }
    /*
     <p> Indicates that major version upgrades are allowed. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints: This parameter must be set to true when specifying a value for the EngineVersion parameter that is a different major version than the DB instance's current version.</p>
    */
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }

    /*
     <p> Indicates that major version upgrades are allowed. Changing this parameter does not result in an outage and the change is asynchronously applied as soon as possible. </p> <p>Constraints: This parameter must be set to true when specifying a value for the EngineVersion parameter that is a different major version than the DB instance's current version.</p>
    */
    inline ModifyDBInstanceRequest&  WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}

    /*
     <p> Indicates that minor version upgrades will be applied automatically to the DB instance during the maintenance window. Changing this parameter does not result in an outage except in the following case and the change is asynchronously applied as soon as possible. An outage will result if this parameter is set to <code>true</code> during the maintenance window, and a newer minor version is available, and RDS has enabled auto patching for that engine version. </p>
    */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    /*
     <p> Indicates that minor version upgrades will be applied automatically to the DB instance during the maintenance window. Changing this parameter does not result in an outage except in the following case and the change is asynchronously applied as soon as possible. An outage will result if this parameter is set to <code>true</code> during the maintenance window, and a newer minor version is available, and RDS has enabled auto patching for that engine version. </p>
    */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /*
     <p> Indicates that minor version upgrades will be applied automatically to the DB instance during the maintenance window. Changing this parameter does not result in an outage except in the following case and the change is asynchronously applied as soon as possible. An outage will result if this parameter is set to <code>true</code> during the maintenance window, and a newer minor version is available, and RDS has enabled auto patching for that engine version. </p>
    */
    inline ModifyDBInstanceRequest&  WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /*
     <p> The new Provisioned IOPS (I/O operations per second) value for the RDS instance. Changing this setting does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value. If you are migrating from Provisioned IOPS to standard storage, set this value to 0. The DB instance will require a reboot for the change in storage type to take effect.</p> <p> <b>SQL Server</b> </p> <p>Setting the IOPS value for the SQL Server database engine is not supported.</p> <p>Type: Integer</p> <p> If you choose to migrate your DB instance from using standard storage to using Provisioned IOPS, or from using Provisioned IOPS to using standard storage, the process can take time. The duration of the migration depends on several factors such as database load, storage size, storage type (standard or Provisioned IOPS), amount of IOPS provisioned (if any), and the number of prior scale storage operations. Typical migration times are under 24 hours, but the process can take up to several days in some cases. During the migration, the DB instance will be available for use, but may experience performance degradation. While the migration takes place, nightly backups for the instance will be suspended. No other Amazon RDS operations can take place for the instance, including modifying the instance, rebooting the instance, deleting the instance, creating a Read Replica for the instance, and creating a DB snapshot of the instance. </p>
    */
    inline long GetIops() const{ return m_iops; }
    /*
     <p> The new Provisioned IOPS (I/O operations per second) value for the RDS instance. Changing this setting does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value. If you are migrating from Provisioned IOPS to standard storage, set this value to 0. The DB instance will require a reboot for the change in storage type to take effect.</p> <p> <b>SQL Server</b> </p> <p>Setting the IOPS value for the SQL Server database engine is not supported.</p> <p>Type: Integer</p> <p> If you choose to migrate your DB instance from using standard storage to using Provisioned IOPS, or from using Provisioned IOPS to using standard storage, the process can take time. The duration of the migration depends on several factors such as database load, storage size, storage type (standard or Provisioned IOPS), amount of IOPS provisioned (if any), and the number of prior scale storage operations. Typical migration times are under 24 hours, but the process can take up to several days in some cases. During the migration, the DB instance will be available for use, but may experience performance degradation. While the migration takes place, nightly backups for the instance will be suspended. No other Amazon RDS operations can take place for the instance, including modifying the instance, rebooting the instance, deleting the instance, creating a Read Replica for the instance, and creating a DB snapshot of the instance. </p>
    */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /*
     <p> The new Provisioned IOPS (I/O operations per second) value for the RDS instance. Changing this setting does not result in an outage and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. </p> <p>Default: Uses existing setting</p> <p>Constraints: Value supplied must be at least 10% greater than the current value. Values that are not at least 10% greater than the existing value are rounded up so that they are 10% greater than the current value. If you are migrating from Provisioned IOPS to standard storage, set this value to 0. The DB instance will require a reboot for the change in storage type to take effect.</p> <p> <b>SQL Server</b> </p> <p>Setting the IOPS value for the SQL Server database engine is not supported.</p> <p>Type: Integer</p> <p> If you choose to migrate your DB instance from using standard storage to using Provisioned IOPS, or from using Provisioned IOPS to using standard storage, the process can take time. The duration of the migration depends on several factors such as database load, storage size, storage type (standard or Provisioned IOPS), amount of IOPS provisioned (if any), and the number of prior scale storage operations. Typical migration times are under 24 hours, but the process can take up to several days in some cases. During the migration, the DB instance will be available for use, but may experience performance degradation. While the migration takes place, nightly backups for the instance will be suspended. No other Amazon RDS operations can take place for the instance, including modifying the instance, rebooting the instance, deleting the instance, creating a Read Replica for the instance, and creating a DB snapshot of the instance. </p>
    */
    inline ModifyDBInstanceRequest&  WithIops(long value) { SetIops(value); return *this;}

    /*
     <p> Indicates that the DB instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p> <p> Permanent options, such as the TDE option for Oracle Advanced Security TDE, cannot be removed from an option group, and that option group cannot be removed from a DB instance once it is associated with a DB instance </p>
    */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    /*
     <p> Indicates that the DB instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p> <p> Permanent options, such as the TDE option for Oracle Advanced Security TDE, cannot be removed from an option group, and that option group cannot be removed from a DB instance once it is associated with a DB instance </p>
    */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /*
     <p> Indicates that the DB instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p> <p> Permanent options, such as the TDE option for Oracle Advanced Security TDE, cannot be removed from an option group, and that option group cannot be removed from a DB instance once it is associated with a DB instance </p>
    */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /*
     <p> Indicates that the DB instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p> <p> Permanent options, such as the TDE option for Oracle Advanced Security TDE, cannot be removed from an option group, and that option group cannot be removed from a DB instance once it is associated with a DB instance </p>
    */
    inline ModifyDBInstanceRequest&  WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /*
     <p> Indicates that the DB instance should be associated with the specified option group. Changing this parameter does not result in an outage except in the following case and the change is applied during the next maintenance window unless the <code>ApplyImmediately</code> parameter is set to <code>true</code> for this request. If the parameter change results in an option group that enables OEM, this change can cause a brief (sub-second) period during which new connections are rejected but existing connections are not interrupted. </p> <p> Permanent options, such as the TDE option for Oracle Advanced Security TDE, cannot be removed from an option group, and that option group cannot be removed from a DB instance once it is associated with a DB instance </p>
    */
    inline ModifyDBInstanceRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    /*
     <p> The new DB instance identifier for the DB instance when renaming a DB instance. When you change the DB instance identifier, an instance reboot will occur immediately if you set <code>Apply Immediately</code> to true, or will occur during the next maintenance window if <code>Apply Immediately</code> to false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::String& GetNewDBInstanceIdentifier() const{ return m_newDBInstanceIdentifier; }
    /*
     <p> The new DB instance identifier for the DB instance when renaming a DB instance. When you change the DB instance identifier, an instance reboot will occur immediately if you set <code>Apply Immediately</code> to true, or will occur during the next maintenance window if <code>Apply Immediately</code> to false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetNewDBInstanceIdentifier(const Aws::String& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = value; }

    /*
     <p> The new DB instance identifier for the DB instance when renaming a DB instance. When you change the DB instance identifier, an instance reboot will occur immediately if you set <code>Apply Immediately</code> to true, or will occur during the next maintenance window if <code>Apply Immediately</code> to false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetNewDBInstanceIdentifier(const char* value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier.assign(value); }

    /*
     <p> The new DB instance identifier for the DB instance when renaming a DB instance. When you change the DB instance identifier, an instance reboot will occur immediately if you set <code>Apply Immediately</code> to true, or will occur during the next maintenance window if <code>Apply Immediately</code> to false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest&  WithNewDBInstanceIdentifier(const Aws::String& value) { SetNewDBInstanceIdentifier(value); return *this;}

    /*
     <p> The new DB instance identifier for the DB instance when renaming a DB instance. When you change the DB instance identifier, an instance reboot will occur immediately if you set <code>Apply Immediately</code> to true, or will occur during the next maintenance window if <code>Apply Immediately</code> to false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const char* value) { SetNewDBInstanceIdentifier(value); return *this;}

    /*
     <p> Specifies the storage type to be associated with the DB instance. </p> <p> Valid values: <code>standard | gp2 | io1</code></p> <p> If you specify <code>io1</code>, you must also include a value for the <code>Iops</code> parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise <code>standard</code></p>
    */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    /*
     <p> Specifies the storage type to be associated with the DB instance. </p> <p> Valid values: <code>standard | gp2 | io1</code></p> <p> If you specify <code>io1</code>, you must also include a value for the <code>Iops</code> parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise <code>standard</code></p>
    */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /*
     <p> Specifies the storage type to be associated with the DB instance. </p> <p> Valid values: <code>standard | gp2 | io1</code></p> <p> If you specify <code>io1</code>, you must also include a value for the <code>Iops</code> parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise <code>standard</code></p>
    */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /*
     <p> Specifies the storage type to be associated with the DB instance. </p> <p> Valid values: <code>standard | gp2 | io1</code></p> <p> If you specify <code>io1</code>, you must also include a value for the <code>Iops</code> parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise <code>standard</code></p>
    */
    inline ModifyDBInstanceRequest&  WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /*
     <p> Specifies the storage type to be associated with the DB instance. </p> <p> Valid values: <code>standard | gp2 | io1</code></p> <p> If you specify <code>io1</code>, you must also include a value for the <code>Iops</code> parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise <code>standard</code></p>
    */
    inline ModifyDBInstanceRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}

    /*
     <p> The ARN from the Key Store with which to associate the instance for TDE encryption. </p>
    */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }
    /*
     <p> The ARN from the Key Store with which to associate the instance for TDE encryption. </p>
    */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /*
     <p> The ARN from the Key Store with which to associate the instance for TDE encryption. </p>
    */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /*
     <p> The ARN from the Key Store with which to associate the instance for TDE encryption. </p>
    */
    inline ModifyDBInstanceRequest&  WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /*
     <p> The ARN from the Key Store with which to associate the instance for TDE encryption. </p>
    */
    inline ModifyDBInstanceRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}

    /*
     <p> The password for the given ARN from the Key Store in order to access the device. </p>
    */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }
    /*
     <p> The password for the given ARN from the Key Store in order to access the device. </p>
    */
    inline void SetTdeCredentialPassword(const Aws::String& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }

    /*
     <p> The password for the given ARN from the Key Store in order to access the device. </p>
    */
    inline void SetTdeCredentialPassword(const char* value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword.assign(value); }

    /*
     <p> The password for the given ARN from the Key Store in order to access the device. </p>
    */
    inline ModifyDBInstanceRequest&  WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}

    /*
     <p> The password for the given ARN from the Key Store in order to access the device. </p>
    */
    inline ModifyDBInstanceRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}

    /*
     <p> Indicates the certificate which needs to be associated with the instance. </p>
    */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }
    /*
     <p> Indicates the certificate which needs to be associated with the instance. </p>
    */
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }

    /*
     <p> Indicates the certificate which needs to be associated with the instance. </p>
    */
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }

    /*
     <p> Indicates the certificate which needs to be associated with the instance. </p>
    */
    inline ModifyDBInstanceRequest&  WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}

    /*
     <p> Indicates the certificate which needs to be associated with the instance. </p>
    */
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    long m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet;
    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;
    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;
    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;
    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;
    long m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;
    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;
    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;
    bool m_multiAZ;
    bool m_multiAZHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    bool m_allowMajorVersionUpgrade;
    bool m_allowMajorVersionUpgradeHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    Aws::String m_newDBInstanceIdentifier;
    bool m_newDBInstanceIdentifierHasBeenSet;
    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;
    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;
    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet;
    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws