package com.ibm.openinsurance.domain;

import java.io.Serializable;
import java.util.List;
import javax.xml.bind.annotation.XmlRootElement;

/**
 * The Class IdCardDetails.
 */
@XmlRootElement
public class IdCardDetails implements Serializable {

	/** The Constant serialVersionUID. */
	private static final long serialVersionUID = -8475999961600498884L;

	/** The vehicle. */
	private Vehicle vehicle;

	/** The policy. */
	private Policy policy;

	/** The insured persons. */
	private List<String> insuredPersons;

	/**
	 * @return the vehicle
	 */
	public Vehicle getVehicle() {
		return vehicle;
	}

	/**
	 * @param vehicle
	 *            the vehicle to set
	 */
	public void setVehicle(Vehicle vehicle) {
		this.vehicle = vehicle;
	}

	/**
	 * @return the policy
	 */
	public Policy getPolicy() {
		return policy;
	}

	/**
	 * @param policy
	 *            the policy to set
	 */
	public void setPolicy(Policy policy) {
		this.policy = policy;
	}

	/**
	 * @return the insuredPersons
	 */
	public List<String> getInsuredPersons() {
		return insuredPersons;
	}

	/**
	 * @param insuredPersons
	 *            the insuredPersons to set
	 */
	public void setInsuredPersons(List<String> insuredPersons) {
		this.insuredPersons = insuredPersons;
	}

}